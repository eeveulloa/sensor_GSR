
#include "Ubidots.h"

#define DEVICE "esp8266_eve"
#define VARIABLE "signal"
#define ID "60b567b31d8472746cb20c4c" 
#define TOKEN "BBFF-LuIKfmFZFwBIn2atlIUMQIhdDklPl7"

#define WIFISSID "Ulloa"
#define PASSWORD "Gofa710203"

Ubidots client(TOKEN);
int signal = 0;

void setup() {
  Serial.begin(9600);
  client.wifiConnect(WIFISSID, PASSWORD);
  
  
  
  // put your setup code here, to run once:

}

void loop() {
  signal = analogRead(A0);
  Serial.println(signal);
  client.add("Valor", signal);
  delay(100);
  // put your main code here, to run repeatedly:

}
