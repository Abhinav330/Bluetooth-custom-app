//This code is created by #ATALL youtube channel. For more information visit : '#ATALL' on youtube

//***************************************************************************************************************  
//     ||  ||     ||   ||||||||   ||   ||       ||
//   |||||||||| ||  ||    ||    ||  || ||       ||            
//     ||  ||   ||  ||    ||    ||  || ||       ||               
//   |||||||||| ||||||    ||    |||||| ||       ||                   
//     ||  ||   ||  ||    ||    ||  || |||||||| ||||||||                  
//***************************************************************************************************************



#include <Servo.h>
Servo ser;
String s;
int pos;
#define light1  12  // light 1 is connected to pin 4
#define light2  10  // light 2 is connected to pin 5
#define servo1  3  // servo motor is connected to pin 3

void setup() 
{
 Serial.begin(9600);
 pinMode(light1,OUTPUT);
 pinMode(light2,OUTPUT);
 ser.attach(3); 
 ser.write(0);
 delay(500);
}

void loop() {

  if(Serial.available()>0)
  {
   s  =  Serial.readString();
    Serial.println(s); 
  }
  if(s =="200")
  {
    digitalWrite(light1,HIGH);
  }
  else if(s == "201")
  {
    digitalWrite(light1,LOW);
  }
  else if(s == "202")
  {
    digitalWrite(light2,HIGH);
  }
  else if(s == "203")
  {
    digitalWrite(light2,LOW);
  }


 
 else if(s == "204")
  {
    ser.write(10);  
  }
 else if(s == "205")
  {
    ser.write(25);
  }
 else if(s == "206")
  {
    ser.write(90);
  }
 else if(s == "207")
  {
    ser.write(100);
  }
 else if(s == "208")
  {
    ser.write(120);
  }
else if(s == "209")
  {
    ser.write(180);
  }
}