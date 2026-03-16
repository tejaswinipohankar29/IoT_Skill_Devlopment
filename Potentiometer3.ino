#define pot A0
#define Rled 7
#define Gled 4
#define Oled 2

void setup(){
  Serial.begin(9600);
  pinMode(pot,INPUT);
  pinMode(Rled,OUTPUT);
  pinMode(Gled,OUTPUT);
  pinMode(Oled,OUTPUT);
}

void loop(){
  int x = analogRead(pot);
  Serial.print("Pot Reading = ");
  Serial.println(x);
  
  if(x>0&&x<=100){
    digitalWrite(Rled,HIGH);
    digitalWrite(Rled,LOW);
    digitalWrite(Gled,LOW);
    
   }
   else if(x>=101&&x<=200){
    digitalWrite(Gled,HIGH);
    digitalWrite(Rled,LOW);
    digitalWrite(Oled,LOW);
   }

   else if(x>=201&&x<=300){
    digitalWrite(Oled,HIGH);
    digitalWrite(Gled,LOW);
    digitalWrite(Oled,LOW);
   }

  
}  