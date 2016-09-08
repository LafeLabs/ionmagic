
/*no license, no IP, no copyright, no law, no property, no patents, 
 * no mining no money no capital no no no
 */



int v = 460;
int x = 0;
int t_old = 0;
int t_new = 0;
int delta_t = 0;
bool up = LOW;
bool down = LOW; 
int n = 0;

void setup() {
  Serial.begin(115200);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}

void loop() {
  up = digitalRead(3);
  down = digitalRead(4);
  x = analogRead(A0);
  if(x <= 480){
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    t_new = millis();
    delta_t = t_new - t_old;
    t_old = t_new;
  }
  if(x >= 506){
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    n = n + 1;
  }
//  delay(1);
Serial.println(x);   
}
