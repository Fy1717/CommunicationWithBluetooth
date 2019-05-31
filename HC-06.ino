#include <SoftwareSerial.h>
SoftwareSerial BTserial(4,2); // RX , TX

char m=' ';
 
void setup() 
{
    Serial.begin(9600);
    Serial.println("HC-06");
 
    
    BTserial.begin(9600);  
    Serial.println("Serial Haberleşme Başlatıldı");
}
 
void loop()
{
 
  if (BTserial.available())
  {
    m = BTserial.read();
    Serial.write(m);
  }
 
  if (Serial.available())
  {
    m=Serial.read();
    BTserial.write(m);
  }
  
}
