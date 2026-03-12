//parallel blink
#define my_led 7 
#define Y_led 2
#define G_led 4


void setup() {
  Serial.begin(9600);
  pinMode(my_led,OUTPUT);
  pinMode(Y_led,OUTPUT);
  pinMode(G_led,OUTPUT);
}

void loop() {
   digitalWrite(my_led,HIGH);
   digitalWrite(Y_led,HIGH);
   digitalWrite(G_led,HIGH);
  
  delay(1000);
  
  digitalWrite(my_led,LOW);
  digitalWrite(Y_led,LOW);
  digitalWrite(G_led,LOW);
  
  delay(1000);
}

