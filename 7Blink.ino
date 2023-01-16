//initialiazing a variable for digital pin 2 to 8

int led1 = 2; //led1 connected to pin 2.
int led2 = 3; //led2 connected to pin 3.
int led3 = 4; //led3 connected to pin 4.
int led4 = 5; //led4 connected to pin 5.
int led5 = 6; //led5 connected to pin 6.
int led6 = 7; //led6 connected to pin 7.
int led7 = 8; //led7 connected to pin 8.
 //pinMode(LED_BUILTIN, OUTPUT);
 
 void setup(){

 pinMode(led1, OUTPUT); //initialize digital pin LED_BUILTIN as an output.
 pinMode(led2, OUTPUT); //initialize digital pin LED_BUILTIN as an output.
 pinMode(led3, OUTPUT); //initialize digital pin LED_BUILTIN as an output.
 pinMode(led4, OUTPUT); //initialize digital pin LED_BUILTIN as an output.
 pinMode(led5, OUTPUT); //initialize digital pin LED_BUILTIN as an output.
 pinMode(led6, OUTPUT); //initialize digital pin LED_BUILTIN as an output.
 pinMode(led7, OUTPUT); //initialize digital pin LED_BUILTIN as an output.

 }

void loop() {
  
  digitalWrite(led1, HIGH); //turn led1 on.
  delay(100); //wait of 0.1 of a second
  digitalWrite(led2, HIGH); //turn led2 on.
  delay(100); //wait of 0.1 of a second
  digitalWrite(led3, HIGH); //turn led3 on.
  delay(100); //wait of 0.1 of a second
  digitalWrite(led4, HIGH); //turn led4 on.
  delay(100); //wait of 0.1 of a second
  digitalWrite(led5, HIGH); //turn led5 on.
  delay(100); //wait of 0.1 of a second
  digitalWrite(led6, HIGH); //turn led6 on.
  delay(100); //wait of 0.1 of a second
  digitalWrite(led7, HIGH); //turn led7 on.
  delay(100); //wait of 0.1 of a second


digitalWrite(led1, LOW); //turn led1 off.
delay(100); //wait for 0.1 second
digitalWrite(led2, LOW); //turn led2 off.
delay(100); //wait for 0.1 second
digitalWrite(led3, LOW); //turn led3 off.
delay(100); //wait for 0.1 second
digitalWrite(led4, LOW); //turn led4 off.
delay(100); //wait for 0.1 second
digitalWrite(led5, LOW); //turn led5 off.
delay(100); //wait for 0.1 second
digitalWrite(led6, LOW); //turn led6 off.
delay(100); //wait for 0.1 second
digitalWrite(led7, LOW); //turn led7 off.
delay(100); //wait for 0.1 second

}
