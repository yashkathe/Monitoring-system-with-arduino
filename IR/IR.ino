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
  Serial.println("DETECTED");
  delay(100);
}else {
  //println("NOTHING DETECTED");
  noTone(13);
  Serial.println("NOTHING DETECTED");
  }
}
