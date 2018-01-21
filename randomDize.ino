#include "diceFunctions.h"

int buttonState =0;

void setup() {
  // randomSeed damit der Zufallsgenerator nicht den gleichen Startwert hat
  randomSeed(analogRead(0));
  // legt die Pins als Ausgang bzw. Eingang mittels function fest 
  initial();
  // Deklarieren des "animation"-Buttons
  int aniButton = digitalRead(button);
  // Deklarieren des timers der die Zeit in ms ermittelt nach dem ein Programm hochgeladen wurde 
  unsigned long time = millis();
 
 
 // Schleife damit die Animation nicht nach dem hochladen direkt startet 
  while (aniButton==LOW) {
    aniButton=digitalRead(button);
  } 
  // Wenn der Button gedrückt wird soll die Animation solange ausgeführt werden bis die 
  // Abbruchbedingung eintritt (nach 5 Sekunden)
  for (time = 0; time <= 5000; time ++ ) {
  time = millis();
  aniButton=digitalRead(button);
  animation();
  }
}

void loop() {
  
  buttonState = digitalRead(button);
  
    if (buttonState == HIGH) {
        sndAnimation();
        rollDice();
        delay(1000);
        reset();
    }

}
