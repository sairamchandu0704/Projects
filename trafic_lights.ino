int g = 2;
int y = 3;
int r = 4;
int g_delay = 5000;
int y_delay = 2000;
int r_delay = 5000;
void setup(){
  pinMode(g,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(r,OUTPUT);
}

void green(){
  digitalWrite(g,HIGH);
  digitalWrite(y,LOW);
  digitalWrite(r,LOW);
}
void yellow(){
  digitalWrite(g,LOW);
  digitalWrite(y,HIGH);
  digitalWrite(r,LOW);
}
void red(){
  digitalWrite(g,LOW);
  digitalWrite(y,LOW);
  digitalWrite(r,HIGH);
}
void loop {
  green();
  delay(g_delay);
  yellow();
  delay(y_delay);
  red();
  delay(r_delay);
}
