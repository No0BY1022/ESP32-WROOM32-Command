//Dont have ESP32-S2 or ESP32-S3?
//Using ESP32-Wroom32 command keys
//Made by DontWipe
//Dont change button name 
#include <Arduino.h>

#define BUTTON_1 12  
#define BUTTON_2 13  
#define BUTTON_3 14  

void setup() {
  Serial.begin(115200);  
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON_1) == LOW) {
    Serial.println("button1");
    delay(300);  
  }

  if (digitalRead(BUTTON_2) == LOW) {
    Serial.println("button2");
    delay(300);  
  }

  if (digitalRead(BUTTON_3) == LOW) {
    Serial.println("button3");
    delay(300);  
  }
}
