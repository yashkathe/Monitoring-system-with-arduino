#define led 2 
#define buzzer 13
#define ir 8
int sensorState ;
int analogValue = 0 ;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzer ,OUTPUT);
pinMode(ir , INPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogValue = analogRead(A0);
Serial.println(analogValue);
sensorState = digitalRead(ir);
Serial.println(sensorState);

if(sensorState == 0 ){
  tone(13 , 500);
  delay(1000);
}else {
  noTone(13);
}


if(analogValue > 800){
  Serial.println("-------there is gas leak!--------");
  digitalWrite(led ,HIGH);
}else {
  Serial.println("there is no gas leak");
  digitalWrite(led, LOW);
}
}
