#define LED 7
#define led 2
#define BUTTON 8
#define button 12

void setup() {

  pinMode(LED,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(BUTTON,INPUT);
  pinMode(button,INPUT);
}

void loop() {
  bool x = digitalRead(BUTTON);
  bool y = digitalRead(button);
if(x==1){
  digitalWrite(LED,HIGH);
}
if(y==1){
  digitalWrite(led,HIGH);
}
}
else{
  digitalWrite(LED,LOW);
  digitalWrite(led,LOW);
}
}
