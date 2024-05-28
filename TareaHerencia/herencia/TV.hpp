#ifndef TV_HPP
#define TV_HPP

#include <string>

class TV {
public:
    TV(const std::string& marca, const std::string& modelo, float precio)
        : marca(marca), modelo(modelo), precio(precio), volumen(10), encendido(false), entrada("HDMI1") {}

    virtual ~TV() {} // Virtual destructor

    float getPrecio() const { return precio; }
    std::string getMarca() const { return marca; }
    std::string getModelo() const { return modelo; }
    std::string getEntrada() const { return entrada; }
    int getVolumen() const { return volumen; }
    bool isEncendido() const { return encendido; }

    void encender() { encendido = true; }
    void apagar() { encendido = false; }
    void seleccionarEntrada(const std::string& nuevaEntrada) { entrada = nuevaEntrada; }
    void subirVolumen() { if (encendido && volumen < 100) ++volumen; }
    void bajarVolumen() { if (encendido && volumen > 0) --volumen; }

    std::string toString() const {
        return marca + " " + modelo + " - Precio: $" + std::to_string(precio) + 
               " - Volumen: " + std::to_string(volumen) + 
               " - Entrada: " + entrada + 
               " - " + (encendido ? "Encendido" : "Apagado");
    }

private:
    std::string marca;
    std::string modelo;
    float precio;
    int volumen;
    bool encendido;
    std::string entrada;
};

class SmartTV : public TV {
public:
    SmartTV(const std::string& marca, const std::string& modelo, float precio, const std::string& sistemaOperativo)
        : TV(marca, modelo, precio), sistemaOperativo(sistemaOperativo) {}

    std::string getSistemaOperativo() const { return sistemaOperativo; }

    std::string toString() const {
        return TV::toString() + " - Sistema Operativo: " + sistemaOperativo;
    }

private:
    std::string sistemaOperativo;
};

class TV3D : public TV {
public:
    TV3D(const std::string& marca, const std::string& modelo, float precio)
        : TV(marca, modelo, precio) {}

    std::string toString() const {
        return TV::toString() + " - 3D";
    }
};

#endif // TV_HPP
