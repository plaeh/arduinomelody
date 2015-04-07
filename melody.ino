/*
 8-ohm speaker on digital pin 0
 tone(pin, frequency, duration)
*/

#include "pitches.h"

int melody[] = {
  NOTE_C4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_D4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_C4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_D4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_F4};

int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 2};

void setup() {
  for (int thisNote = 0; thisNote < 24; thisNote++) {

    int noteDuration = 1000/noteDurations[thisNote];
    tone(0, melody[thisNote],noteDuration);

    int pauseBetweenNotes = noteDuration * 1.50;
    delay(pauseBetweenNotes);
    noTone(0);
  }
}

void loop() {
}
