#include "TVLCD.hpp"
#include <iostream>
using namespace std;

TVLCD::TVLCD() {
    volumen = 15;
    entrada = "AV1";
}

void TVLCD::seleccionarEntrada(string e) {
    entrada = e;
    cout << "TVLCD: Seleccionando entrada " << entrada << endl;
}

void TVLCD::subirVolumen() {
    volumen++;
    cout << "TVLCD: Subiendo volumen a " << volumen << endl;
}

void TVLCD::bajarVolumen() {
    volumen--;
    cout << "TVLCD: Bajando volumen a " << volumen << endl;
}

string TVLCD::toString() {
    return "TVLCD(Encendido: " + to_string(isEncendido()) + ", Volumen: " + to_string(volumen) + ", Entrada: " + entrada + ")";
}
