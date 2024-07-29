int DelTime = 3000;
int Del2 = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);
pinMode(5, OUTPUT);
pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9, HIGH);
delay(DelTime);
digitalWrite(9, LOW);
digitalWrite(7, HIGH);
delay(Del2);
digitalWrite(7, LOW);
digitalWrite(5, HIGH);
delay(DelTime);
digitalWrite(5, LOW);
}
