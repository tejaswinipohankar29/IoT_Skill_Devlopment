#define pot A0
#define LED 7

void setup(){
  Serial.begin(9600);
  pinMode(pot,INPUT);
  pinMode(LED,OUTPUT);
}

void loop(){
  int x = analogRead(pot);
  Serial.print("Pot Reading = ");
  Serial.println(x);
  
  if(x>0){
    digitalWrite(LED,HIGH);
    
   }
  else{
    digitalWrite(LED,LOW);
  }
  
}  