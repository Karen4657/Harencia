#include "TVLED.hpp"
#include <iostream>
using namespace std;

TVLED::TVLED() {
    volumen = 20;
    entrada = "HDMI2";
}

void TVLED::seleccionarEntrada(string e) {
    entrada = e;
    cout << "TVLED: Seleccionando entrada " << entrada << endl;
}

void TVLED::subirVolumen() {
    volumen++;
    cout << "TVLED: Subiendo volumen a " << volumen << endl;
}

void TVLED::bajarVolumen() {
    volumen--;
    cout << "TVLED: Bajando volumen a " << volumen << endl;
}

string TVLED::toString() {
    return "TVLED(Encendido: " + to_string(isEncendido()) + ", Volumen: " + to_string(volumen) + ", Entrada: " + entrada + ")";
}
