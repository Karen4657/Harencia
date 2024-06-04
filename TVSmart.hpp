#ifndef TVSMART_HPP
#define TVSMART_HPP

#include "TV.hpp"

class TVSmart : public TV {
public:
    TVSmart();
    void seleccionarEntrada(std::string entrada) override;
    void subirVolumen() override;
    void bajarVolumen() override;
    std::string toString() override;
};

#endif
