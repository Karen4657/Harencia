#include "TV.hpp"
using namespace std;

TV::TV() : volumen{10}, entrada{"Ninguna"} {}

std::string TV::toString() {
    return "TV(Encendido: " + to_string(isEncendido()) + ", Volumen: " + to_string(volumen) + ", Entrada: " + entrada + ")";
}
