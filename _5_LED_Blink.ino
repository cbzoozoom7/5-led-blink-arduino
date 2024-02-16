int Delay = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
for(int a = 5;a <= 10;a++) {
  digitalWrite(a,HIGH);
  delay(Delay);
  digitalWrite(a,LOW);
}
for(int b = 9;b >= 3;b--){
  digitalWrite(b,HIGH);
  delay(Delay);
  digitalWrite(b,LOW);
}
}
