#define pot A0

void setup(){
  Serial.begin(9600);
  pinMode(pot,INPUT);
}

void loop(){
  int x = analogRead(pot);
  Serial.print("Pot Reading = ");
  Serial.println(x);
  
}