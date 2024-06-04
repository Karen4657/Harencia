#ifndef ELECTRODOMESTICO_HPP
#define ELECTRODOMESTICO_HPP

#include <string>

class Electrodomestico {
private:
    bool encendido;
protected:
    std::string funcionActual;
public:
    Electrodomestico();
    void setEncendido(bool b);
    bool isEncendido();
    virtual std::string dimeFuncionActual();
    virtual void cambiaFuncionActual(std::string nf);
    virtual void encender();
    virtual void apagar();
    virtual std::string toString();
};

#endif
