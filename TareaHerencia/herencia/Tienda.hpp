#ifndef TIENDA_HPP
#define TIENDA_HPP

#include <string>
#include <iostream>
#include "Persona.hpp"
#include "TV.hpp"

class TiendaDepartamental {
public:
    TiendaDepartamental(const std::string& nombre) : nombre(nombre) {}

    virtual void pagoTarjeta(TV& tv, Persona& persona) {
        std::cout << "Procesando pago de $" << tv.getPrecio() << " para " << persona.getNombre() << " con la tarjeta " << persona.getInfoTarjeta() << std::endl;
    }

    virtual void entregaDomicilio(TV& tv, Persona& persona) {
        std::cout << "Entregando la TV " << tv.getMarca() << " " << tv.getModelo() << " a " << persona.getNombre() << " en " << persona.getDireccion() << std::endl;
    }

private:
    std::string nombre;
};

class Liverpool : public TiendaDepartamental {
public:
    Liverpool() : TiendaDepartamental("Liverpool") {}
};

class Sears : public TiendaDepartamental {
public:
    Sears() : TiendaDepartamental("Sears") {}
};

class PalacioDeHierro : public TiendaDepartamental {
public:
    PalacioDeHierro() : TiendaDepartamental("Palacio de Hierro") {}
};

#endif // TIENDA_HPP
