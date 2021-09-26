#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial mySerial(7, 8);

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos1=90;
int pos2=90;
int pos3=90;
int pos4=90;

int in;

void setup() {
  mySerial.begin(9600);

  myservo1.attach(6);
  myservo2.attach(9);
  myservo3.attach(10);
  myservo4.attach(11);
}

void loop() { 
  if (mySerial.available()) {
    in = mySerial.read();
  }

  if (in == 'A')    {  pos1=pos1+1; if(pos1>180) {pos1=180;} Serial.println(pos1); delay(10);} 
     if (in == 'Z') {  pos1=pos1-1; if(pos1<0)   {pos1=0;  } Serial.println(pos1); delay(10);}

  if (in == 'B')    {  pos2=pos2+1; if(pos2>180) {pos2=180;} Serial.println(pos2); delay(10);} 
     if (in == 'Y') {  pos2=pos2-1; if(pos2<0)   {pos2=0;  } Serial.println(pos2); delay(10);}

  if (in == 'C')    {  pos3=pos3+1; if(pos3>180) {pos3=180;} Serial.println(pos3); delay(10);} 
     if (in == 'X') {  pos3=pos3-1; if(pos3<0)   {pos3=0;  } Serial.println(pos3); delay(10);}

  if (in == 'D')    {  pos4=pos4+1; if(pos4>180) {pos4=180;} Serial.println(pos4); delay(10);} 
     if (in == 'W') {  pos4=pos4-1; if(pos4<0)   {pos4=0;  } Serial.println(pos4); delay(10);}
  
  myservo1.write(pos1);
  myservo2.write(pos2); 
  myservo3.write(pos3); 
  myservo4.write(pos4); 
}

