  int trig = 2;int echo = 3;int motor = 5;
void setup() {
  pinMode(trig, OUTPUT);pinMode(echo, INPUT);
  pinMode(motor, OUTPUT);}
void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long t = pulseIn(echo, HIGH);
  long d = t * 0.0343 / 2;
  int pwm= map(d, 3, 333, 255, 0);
  analogWrite(motor, pwm);}
