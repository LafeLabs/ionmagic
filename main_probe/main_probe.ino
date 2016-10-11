int x = 0;
int setPoint  = 512;
int delta = 15;

void setup() {
  Serial.begin(115200);
  pinMode(8,OUTPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
}

void loop() {
  x = analogRead(A0);
  Serial.println(x);
  if(x > setPoint + delta){
    digitalWrite(8,LOW);
  }  
  if(x < setPoint - delta){
    digitalWrite(8,HIGH);
  }
  if(digitalRead(10)){
    setPoint++;
  }
  if(digitalRead(11)){
    setPoint--;
  }
  
  delay(1);
}
