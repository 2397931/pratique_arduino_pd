// Le code minimal

#include <Arduino.h>
#include <Bounce2.h>
Bounce2::Button bouton1; //classe bouton 
Bounce2::Button bouton2; //classe bouton 

#define BROCHE_DEL2 5 //05 SUR ARDUINO
#define BROCHE_DEL1 3 //03 SUR ARDUINO

#define BROCHE_BOUTON1 2 //02 SUR ARDUINO
#define BROCHE_BOUTON2 4 //04 SUR ARDUINO


void setup() {
      // Configuration de la DEL
    pinMode(BROCHE_DEL1, OUTPUT);
    digitalWrite(BROCHE_DEL1, LOW);

    pinMode(BROCHE_DEL2, OUTPUT);
    digitalWrite(BROCHE_DEL2, LOW);

    // Configuration du bouton
    bouton1.attach(BROCHE_BOUTON1, INPUT_PULLUP);
    bouton1.setPressedState(LOW);

    bouton2.attach(BROCHE_BOUTON2, INPUT_PULLUP);
    bouton2.setPressedState(LOW);
}

void loop() {
    bouton1.update();
    bouton2.update();

    if (bouton1.isPressed()) {

        digitalWrite(BROCHE_DEL1, HIGH);
    } else {
        digitalWrite(BROCHE_DEL1, LOW);
    }


    if (bouton2.isPressed()) {
        digitalWrite(BROCHE_DEL2, HIGH);
    } else {
        digitalWrite(BROCHE_DEL2, LOW);
    }
}
