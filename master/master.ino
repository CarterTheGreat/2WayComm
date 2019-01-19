//Master bt 2 way com
#include <SoftwareSerial.h>

SoftwareSerial btCom(8,9); //Rx,Tx

//Comm
char key;
String data;

void setup() {
  Serial.begin(9600);
  Serial.println("Master Started");
  
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
