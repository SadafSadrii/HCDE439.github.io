//initialiazing a variable for digital pin 2 to 8

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
 //pinMode(LED_BUILTIN, OUTPUT);
 
 void setup(){

 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);

 }

void loop() {
  
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led7, HIGH);
  delay(100);


digitalWrite(led1, LOW);
delay(100);
digitalWrite(led2, LOW);
delay(100);
digitalWrite(led3, LOW);
delay(100);
digitalWrite(led4, LOW);
delay(100);
digitalWrite(led5, LOW);
delay(100);
digitalWrite(led6, LOW);
delay(100);
digitalWrite(led7, LOW);
delay(100);

}
