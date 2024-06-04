#ifndef TVLED_HPP
#define TVLED_HPP

#include "TV.hpp"

class TVLED : public TV {
public:
    TVLED();
    void seleccionarEntrada(std::string entrada) override;
    void subirVolumen() override;
    void bajarVolumen() override;
    std::string toString() override;
};

#endif
