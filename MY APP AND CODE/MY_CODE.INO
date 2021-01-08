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
    s =  Serial.readString();
    Serial.println(s); 
  }
  if(s =="500")
  {
    digitalWrite(light1,HIGH);
  }
  else if(s == "600")
  {
    digitalWrite(light1,LOW);
  }
  else if(s == "700")
  {
    digitalWrite(light2,HIGH);
  }
  else if(s == "800")
  {
    digitalWrite(light2,LOW);
  }


 
 else if(s == "0")
  {
    ser.write(0);
    pos = 0;
  }
 else if(s == "10")
  {
    ser.write(10);
    pos = 10;
  }
 else if(s == "20")
  {
    ser.write(20);
    pos = 20;
  }
 else if(s == "90")
  {
    ser.write(90);
    pos = 90;
  }
 else if(s == "120")
  {
    ser.write(120);
    pos = 120;
  }

else if(s == "180")
  {
    ser.write(180);
    pos = 180;
  }
else if(s == "-10")
  {
    pos = pos +1;
    ser.write(pos);
  }

else if(s == "-20")
  {
    pos = pos - 1;
    ser.write(pos);
  }

else if(s == "-30")
  {
    pos = pos +10;
    ser.write(pos);
  }  
else if(s == "-40")
  {
    pos = pos - 10;
    ser.write(pos);
  }

s = "-1000";    
delay(50);

}