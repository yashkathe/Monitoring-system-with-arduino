#include "DHT.h"
#include <LiquidCrystal_I2C.h>;

LiquidCrystal_I2C lcd(0x27, 16 ,2); 

#define DHTPIN 3    

#define DHTTYPE DHT22   


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");

  dht.begin();
}

void loop() {
  
  delay(3000);


  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(false);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Compute heat index in Fahrenheit (default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (false)
  float hic = dht.computeHeatIndex(t, h, true);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t\t");
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Humidity");
  lcd.setCursor(8,0);
  lcd.print("=");
  lcd.setCursor(9,0);
  lcd.print(h);
  lcd.setCursor(15,0);
  lcd.print("%");
  Serial.print("Temperature: ");
  Serial.print(t);
  lcd.setCursor(0,1);
  lcd.print("Temp");
  lcd.setCursor(4,1);
  lcd.print("=");
  lcd.setCursor(5,1);
  lcd.print(t);
  lcd.setCursor(11,1);
  lcd.print("*C");
  Serial.print(" *C ");
//  Serial.print(f);
//  Serial.print(" *F\t");
  Serial.print("\t\t");
  Serial.print("Heat index: ");
  Serial.print(hic);
  Serial.println(" *C ");}
//  Serial.print(hif);
//  Serial.println(" *F")
