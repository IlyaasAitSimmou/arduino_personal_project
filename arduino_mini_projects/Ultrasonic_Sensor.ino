int Trig = 8;
int Echo = 9;
int duration;
int distance;

void setup() {
  // put your setup code here, to run once:
pinMode(Trig, OUTPUT);
pinMode(Echo, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Trig, LOW);
delay(2);
digitalWrite(Trig, HIGH);
delay(10);
digitalWrite(Trig, LOW);

duration = pulseIn(Echo, HIGH);

distance = duration/2*0.0343;
Serial.println(distance);
}
