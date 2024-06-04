#include "Electrodomestico.hpp"
using namespace std;

Electrodomestico::Electrodomestico() : encendido{false}, funcionActual{"Ninguna"} {}

void Electrodomestico::setEncendido(bool b) { encendido = b; }
bool Electrodomestico::isEncendido() { return encendido; }

string Electrodomestico::dimeFuncionActual() {
    return "La función actual es " + funcionActual;
}

void Electrodomestico::cambiaFuncionActual(string nf) {
    funcionActual = nf;
}

void Electrodomestico::encender() { setEncendido(true); }
void Electrodomestico::apagar() { setEncendido(false); }

string Electrodomestico::toString() {
    return "Electrodomestico(" + to_string(encendido) + "," + funcionActual + ")";
}
