#include<SoftwareSerial.h>

int rx=2,tx=3;
int rec,ack=1;

SoftwareSerial ser(rx,tx);

void setup()
{
  Serial.begin(9600);
  ser.begin(9600);
}
void loop()
{
  if(ser.available()>0)
  {
    rec=ser.read();
    Serial.println(rec);
    ser.write(ack);
  
  }
}
