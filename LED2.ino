//this is my first Iot program
#define my_led 7 //global declaration,LED pin no.7


void setup() {
  pinMode(my_led,OUTPUT);
  // put your setup code here, to run once:

}


void loop() {
  digitalWrite(my_led,HIGH);
  delay(1000);
  digitalWrite(my_led, LOW);
  delay(1000)

  // put your main code here, to run repeatedly:
}
