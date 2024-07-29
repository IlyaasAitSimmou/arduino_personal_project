
int EnA = 11;
int in1 = 13;
int in2 = 12;
int EnB = 3;
int in3 = 2;
int in4 = 4;
int irMid = A2;
int irRight = A3;
int irLeft = A5;
int Trig = 7;
int Echo = 6;
int Speed = 255;
int duration;
int distance;
int irMsig;
int irRsig;
int irLsig;


void setup() {
  // put your setup code here, to run once:
pinMode(EnA, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(EnB, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(irMid, INPUT);
pinMode(irRight, INPUT);
pinMode(irLeft, INPUT);
pinMode(Trig, OUTPUT);
pinMode(Echo, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  irMsig = analogRead(irMid);
  irRsig = analogRead(irRight);
  irLsig = analogRead(irLeft);
  analogWrite(EnA, Speed);
  analogWrite(EnB, Speed);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

}
