#include <DigiMouse.h>
void setup(){
  DigiMouse.begin();
  pinMode(1, OUTPUT);
}
 
void loop() {
  while(true) {
    digitalWrite(1, HIGH);  
    DigiMouse.move(10,0,0); // 2px right
    DigiMouse.delay(50);
    DigiMouse.move(-10,0,0); // 2px left
    digitalWrite(1, LOW);
    DigiMouse.delay(30000);
  }
}
