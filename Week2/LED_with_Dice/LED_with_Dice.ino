#include <DiceController.h> // 
Dice dice(2,3,4,5,6,7,8,9,10); // Led configuration

int repeats; // Setting variable for repeats

void setup() {
  pinMode(A0,INPUT); // Configuring button
}

void loop() {
  repeats = 0; // Reseting repeats
  if (analogRead(A0) == 1023) {
    while (repeats < 4) {
      int selectedNumber = random(1,6); // Randoming number
      dice.setNumber(selectedNumber); // Setting randomed number
      repeats++; // Increasing variable for repeat
      delay(100); // Delay for good visibility
    }
  }
}
