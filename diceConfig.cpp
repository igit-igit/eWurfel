//Implementieren der Funktionen für Header Datei fragilWurfel.h 

#include "Arduino.h"
#include "diceFunctions.h"


// LED Deklaration 
#define led_up_right 5
#define led_mid_right 6
#define led_low_right 7
#define led_mid 8
#define led_up_left 9
#define led_mid_left 10
#define led_low_left 11

// Taster Deklaration 
int button = 2;

// Deklaration der Zufallszahl-Variable die durch den Funktionsausfruf random generiert wird 
int randomNumber = 0;

/*    Aufbau 
  LED:   L (M) R
    up   O     O
    mid  O  O  O      X  (Button)
    low  O     O
*/

// Initialisierung der Pins festlegen ob Eingang oder Ausgang 
void initial (){
  pinMode(led_up_right, OUTPUT);
  pinMode(led_mid_right, OUTPUT);
  pinMode(led_low_right, OUTPUT);
  pinMode(led_mid, OUTPUT);
  pinMode(led_up_left, OUTPUT);
  pinMode(led_mid_left, OUTPUT);
  pinMode(led_low_left, OUTPUT);
  pinMode(button, INPUT);
}

// Funktion die den letzten Zustand zurück setzt
void reset(){
  
  digitalWrite(led_up_right, LOW);
  digitalWrite(led_mid_right, LOW);
  digitalWrite(led_low_right, LOW);
  digitalWrite(led_mid, LOW);
  digitalWrite(led_up_left, LOW);
  digitalWrite(led_mid_left, LOW);
  digitalWrite(led_low_left, LOW);
        
}

// Funktionen die zurückgeben welche LED leuchten soll 
void thatsOne(){
  
  reset();
  digitalWrite(led_mid, HIGH);
}


void thatsTwo(){
  
  reset();
  digitalWrite(led_up_right, HIGH);
  digitalWrite(led_low_left, HIGH);
}


void thatsThree(){
  
  reset();
  digitalWrite(led_up_right, HIGH);
  digitalWrite(led_mid, HIGH);
  digitalWrite(led_low_left, HIGH);
}
  
  
void thatsFour(){
  
  reset();
  digitalWrite(led_up_right, HIGH);
  digitalWrite(led_low_right, HIGH);
  digitalWrite(led_up_left, HIGH);
  digitalWrite(led_low_left, HIGH);
}


void thatsFive(){
  
  reset();
  digitalWrite(led_up_right, HIGH);
  digitalWrite(led_low_right, HIGH);
  digitalWrite(led_mid, HIGH);
  digitalWrite(led_up_left, HIGH);
  digitalWrite(led_low_left, HIGH);
  
}


void thatsSix(){
  
  reset();
  digitalWrite(led_up_right, HIGH);
  digitalWrite(led_mid_right, HIGH);
  digitalWrite(led_low_right, HIGH);
  digitalWrite(led_up_left, HIGH);
  digitalWrite(led_mid_left, HIGH);
  digitalWrite(led_low_left, HIGH);
}

// Funktion die die Zufallszahl generiert
void rollDice(){
  // Wertebereich für den Zahlgenerator
int lowBorder =1;
int upBorder =7;
  
  randomNumber = random(lowBorder, upBorder);
  Serial.println(randomNumber);
  switch (randomNumber){
    case 1:
    thatsOne();
    break;
    
    case 2:
    thatsTwo();
    break;
    
    case 3:
    thatsThree();
    break;
    
    case 4:
    thatsFour();
    break;
    
    case 5:
    thatsFive();
    break;
    
    case 6:
    thatsSix();
    // Bei Erfolg Anweisung verlassen
    break;
    // Wenn kein Fall ausgeführt wurde default
    default:
    break;
  }
}

 // Setup-Animation
  void animation(){
  
  digitalWrite(led_low_left,HIGH );
  delay(90);
  digitalWrite(led_mid, HIGH);
  delay(50);
  digitalWrite(led_low_left, LOW);
  delay(90);
  digitalWrite(led_up_right, HIGH);
  delay(50);
  digitalWrite(led_mid, LOW);
  delay(50);
  digitalWrite(led_up_right, LOW);
  delay(90);
  digitalWrite(led_low_right, HIGH);
  delay(90);
  digitalWrite(led_mid, HIGH);
  delay(50);
  digitalWrite(led_low_right, LOW);
  delay(90);
  digitalWrite(led_up_left, HIGH);
  delay(50);
  digitalWrite(led_mid, LOW);
  delay(50);
  digitalWrite(led_up_left, LOW);
  reset();
  }
  
   // Würfelanimation loop
  void sndAnimation(){
  delay(1200);
  digitalWrite(led_mid, HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  delay(1000);
  digitalWrite(led_mid,HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  delay(800);
  digitalWrite(led_mid,HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  delay(600);
  digitalWrite(led_mid,HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  delay(500);
  digitalWrite(led_mid,HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  delay(400);
  digitalWrite(led_mid,HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  delay(300);
  digitalWrite(led_mid,HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  delay(200);
  digitalWrite(led_mid,HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  delay(100);
  digitalWrite(led_mid,HIGH);
  delay(100);
  digitalWrite(led_mid,LOW);
  reset();
  }
  
  /* Testanimationen
  digitalWrite(led_up_left, HIGH);
  delay(90);
  digitalWrite(led_mid_left, HIGH);
  delay(60);
  digitalWrite(led_up_left, LOW);
  delay(90);
  digitalWrite(led_low_left, HIGH);
  delay(60);
  digitalWrite(led_mid_left, LOW);
  delay(90);
  digitalWrite(led_low_right, HIGH);
  delay(60);
  digitalWrite(led_low_left, LOW);
  delay(90);
  digitalWrite(led_mid_right, HIGH);
  delay(60);
  digitalWrite(led_low_right, LOW);
  delay(90);
  digitalWrite(led_up_right, HIGH);
  delay(60);
  digitalWrite(led_mid_right, LOW);
  delay(60);
  digitalWrite(led_up_right, LOW);*/
  
  // Zweiter durchlauf
  /*digitalWrite(led_up_left, HIGH);
  delay(40);
  digitalWrite(led_up_right,LOW);
  delay(40);
  digitalWrite(led_mid_left, HIGH);
  delay(40);
  digitalWrite(led_up_left, LOW);
  delay(40);
  digitalWrite(led_low_left, HIGH);
  delay(40);
  digitalWrite(led_mid_left, LOW);
  delay(40);
  digitalWrite(led_low_right, HIGH);
  delay(40);
  digitalWrite(led_low_left, LOW);
  delay(40);
  digitalWrite(led_mid_right, HIGH);
  delay(40);
  digitalWrite(led_low_right, LOW);
  delay(40);
  digitalWrite(led_up_right, HIGH);
  delay(40);
  digitalWrite(led_mid_right, LOW);
  delay(40);
  digitalWrite(led_up_right, LOW);
  }*/
  