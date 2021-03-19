#define buzzer 13
#define ir 8
int sensorState ;

void setup () {
  pinMode(buzzer ,OUTPUT);
  pinMode(ir , INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorState = digitalRead(ir);
  Serial.println(sensorState);

if(sensorState == 0 ){
  tone(13 , 500);
  delay(1000);
}else {
  noTone(13);
}
}
