#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>
#include <vector>
#include<iostream>
#include "TV.hpp"

class Persona {
public:
    Persona(const std::string& nombre, const std::string& direccion, const std::string& infoTarjeta)
        : nombre(nombre), direccion(direccion), infoTarjeta(infoTarjeta) {}

    std::string getNombre() const { return nombre; }
    std::string getDireccion() const { return direccion; }
    std::string getInfoTarjeta() const { return infoTarjeta; }

    void comprarTV(TV& tv) { televisores.push_back(&tv); }
    void recibirTV(TV& tv) { std::cout << nombre << " ha recibido la TV " << tv.getMarca() << " " << tv.getModelo() << std::endl; }

private:
    std::string nombre;
    std::string direccion;
    std::string infoTarjeta;
    std::vector<TV*> televisores;
};

#endif // PERSONA_HPP
