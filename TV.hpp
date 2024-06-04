#ifndef TV_HPP
#define TV_HPP

#include "Electrodomestico.hpp"

class TV : public Electrodomestico {
protected:
    int volumen;
    std::string entrada;
public:
    TV();
    virtual void seleccionarEntrada(std::string entrada) = 0;
    virtual void subirVolumen() = 0;
    virtual void bajarVolumen() = 0;
    virtual std::string toString() override;
};

#endif
