// my first iot code 

#define my_led 7 //global declaration 

void setup() {
  pinMode(my_led,OUTPUT);
}

void loop() {
  digitalWrite(my_led, HIGH);

}
