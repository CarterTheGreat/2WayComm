//Slave bt 2 way comm
#include <SoftwareSerial.h>

SoftwareSerial btCom(8,9); //Rx,Tx

//Comm
char key;
String data;

void setup() {
  
  Serial.begin(9600);
  Serial.println("Slave Started");
  
  btSerial.begin(9600);
  

}

void loop() {
  if (BTserial.available()){
      
        Serial.write(BTserial.read());
    }
 
    if (Serial.available()){
      
        BTserial.write(Serial.read());
    }
}
