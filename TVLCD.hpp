#ifndef TVLCD_HPP
#define TVLCD_HPP

#include "TV.hpp"

class TVLCD : public TV {
public:
    TVLCD();
    void seleccionarEntrada(std::string entrada) override;
    void subirVolumen() override;
    void bajarVolumen() override;
    std::string toString() override;
};

#endif
