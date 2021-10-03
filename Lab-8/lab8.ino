int count =0;
int pin=2;
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), fun, HIGH);
  
  

}

void loop() {
  delay(100);
  
  // put your main code here, to run repeatedly:

}
void fun()
{
  count++;
  Serial.println(count);
  delay(550);
}
