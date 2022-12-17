#include <RTClib.h>
#include <SPI.h>
#include <SD.h>
#include <Wire.h>
#include <TimeLib.h>
#include <DS1307RTC.h>
int s=A0;
int sound = A0;
int loudness=A3;
File myFile;
RTC_DS1307 rtc;
void setup() {
Serial.begin(9600);
SD.begin();
}
int readsound()
{
  for(int i=0; i<32; i++)
    {
 s += analogRead(0);  
    }
 s >>= 5;
 return s;
}
int readloudness()
{
  loudness = analogRead(A3);

return loudness;
}

void loop() {
  myFile = SD.open("test.txt", FILE_WRITE);
  if (myFile) {
   int p=readsound();
   int l=readloudness();
  tmElements_t tm;

 if (RTC.read(tm)) {
 
    Serial.print(p);
    Serial.print(',');
    Serial.println(l);
    myFile.print(tm.Day);
    myFile.print('/');
    myFile.print(tm.Month);
    myFile.print('/');
    myFile.print(tmYearToCalendar(tm.Year));
    myFile.print(",");
    myFile.print(tm.Hour);
    myFile.print(":");
    myFile.print(tm.Minute);
    myFile.print(":");
    myFile.print(tm.Second);
    myFile.print(',');
    myFile.print(p);
    myFile.print(',');
    myFile.println(l);
    myFile.close();
    delay(1000);
  } 
    else {
    if (RTC.chipPresent()) {
      Serial.println("The DS1307 is stopped.  Please run the SetTime");
      Serial.println("example to initialize the time and begin running.");
      Serial.println();
    } else {
      Serial.println("DS1307 read error!  Please check the circuitry.");
      Serial.println();
    }
    delay(1000);} 
}}
 
 
