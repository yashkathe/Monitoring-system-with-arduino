#define led 2 
int analogValue = 0 ;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogValue = analogRead(A0);
Serial.println(analogValue);

if(analogValue > 800){
  Serial.println("-------there is gas leak!--------");
  digitalWrite(led ,HIGH);
}else {
  Serial.println("there is no gas leak");
  digitalWrite(led, LOW);
}
}
