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
  int t = pulseIn(echo, HIGH);
  int d = t * 0.0343 / 2;
  if (d < 2) {
    d = 2; }
  else if (d > 335) {
    d = 335;}
  int pwm= map(d, 2, 335, 255, 0);
  analogWrite(motor, pwm);}