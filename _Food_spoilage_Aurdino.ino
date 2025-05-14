
#include <SoftwareSerial.h>


int pinRedLed = 12;
int pinWhiteLed = 11;
int pinSensor = A5;
int THRESHOLD = 250;
int buzzer = 10;

 

int rdata = 0; 
String mystring; 
void setup()
{
Serial.begin(9600); 


pinMode(buzzer, OUTPUT);
pinMode(pinRedLed, OUTPUT);
pinMode(pinWhiteLed, OUTPUT);
pinMode(pinSensor, INPUT);

}

void loop()
{

int rdata  =  analogRead(pinSensor);


Serial.print("Methane Range: ");
Serial.println(rdata);

if(rdata >= THRESHOLD){
   digitalWrite(pinRedLed, HIGH);
   digitalWrite(pinWhiteLed, LOW);
   digitalWrite(buzzer, HIGH);  
  
   delay(50);
 
}else
  {
    digitalWrite(pinRedLed, LOW);
    digitalWrite(pinWhiteLed, HIGH);
    digitalWrite(buzzer, LOW);
   
  }
  
  

 mystring = ""; 
delay(1000); 
 
}
