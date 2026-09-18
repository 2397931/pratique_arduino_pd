// Le code minimal

#include <Arduino.h>
#include <Chrono.h>
#include <Bounce2.h>
Bounce2::Button bouton; //classe bouton 

#define BROCHE_DEL 3 //03 SUR ARDUINO
#define BROCHE_BOUTON 2 //02 SUR ARDUINO

bool etatDel = LOW;

void setup() {
      // Configuration de la DEL
    pinMode(BROCHE_DEL, OUTPUT);
    digitalWrite(BROCHE_DEL, etatDel);

    // Configuration du bouton
    bouton.attach(BROCHE_BOUTON, INPUT_PULLUP);
    bouton.setPressedState(LOW);
}

void loop() {
    bouton.update();
    if (bouton.pressed()) {
        etatDel = !etatDel;
        digitalWrite(BROCHE_DEL, etatDel);
    }
}
