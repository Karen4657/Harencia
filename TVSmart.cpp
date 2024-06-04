#include "TVSmart.hpp"
#include <iostream>
using namespace std;

TVSmart::TVSmart() {
    volumen = 10;
    entrada = "HDMI1";
}

void TVSmart::seleccionarEntrada(string e) {
    entrada = e;
    cout << "TVSmart: Seleccionando entrada " << entrada << endl;
}

void TVSmart::subirVolumen() {
    volumen++;
    cout << "TVSmart: Subiendo volumen a " << volumen << endl;
}

void TVSmart::bajarVolumen() {
    volumen--;
    cout << "TVSmart: Bajando volumen a " << volumen << endl;
}

string TVSmart::toString() {
    return "TVSmart(Encendido: " + to_string(isEncendido()) + ", Volumen: " + to_string(volumen) + ", Entrada: " + entrada + ")";
}
