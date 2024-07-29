
int IRoutR = A0;
int IRlightR;
int IRoutL = A2;
int IRlightL;

void setup() {
  // put your setup code here, to run once:
pinMode(IRoutR, INPUT);
pinMode(IRoutL, INPUT);
Serial.begin(9600);
}

void loop() {
  IRlightR = analogRead(IRoutR);
  Serial.print(IRlightR);
  Serial.print(" ");
  IRlightL = analogRead(IRoutL);
  Serial.println(IRlightL);
  // put your main code here, to run repeatedly:
  delay(500);
}


