#define Rled 7
#define Yled 2
#define Gled 4

void setup(){
  
  pinMode(Rled,OUTPUT);
  pinMode(Yled,OUTPUT);
  pinMode(Gled,OUTPUT);
}

void loop(){
  digitalWrite(Rled,HIGH);
  digitalWrite(Yled,HIGH);
  digitalWrite(Gled,HIGH);

  delay(1000);

  digitalWrite(Rled,LOW);
  digitalWrite(Yled,LOW);
  digitalWrite(Gled,LOW);

  delay(1000);
}
