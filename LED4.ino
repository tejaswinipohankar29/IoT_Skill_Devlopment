#define Rled 7
#define Yled 2
#define Gled 4

void setup(){
  Serial.begin(9600);
  pinMode(Rled,OUTPUT);
  pinMode(Yled,OUTPUT);
  pinMode(Gled,OUTPUT);
}

void loop(){
  digitalWrite(Rled,HIGH);
  Serial.println("LED is ON");
  delay(1000);
  digitalWrite(Rled,LOW);
  Serial.println("LED is OFF");
  delay(1000);
  
  digitalWrite(Yled,HIGH);
  Serial.println("LED is ON");
  delay(1000);
  digitalWrite(Yled,LOW);
  Serial.println("LED is OFF");
  delay(1000);

  digitalWrite(Gled,HIGH);
  Serial.println("LED is ON");
  delay(1000);
  digitalWrite(Gled,LOW);
  Serial.println("LED is OFF");
  delay(1000);
}
