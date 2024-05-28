#include "Persona.hpp"
#include "Tienda.hpp"
#include "TV.hpp"
#include <iostream>

using namespace std;

int main() {
    // Crear un cliente
    Persona cliente("Estrella Lolbeth", "Calle Violetas 123", "1234-5678-9012-3456");
    // Crear 3 tiendas departamentales
    Liverpool tienda1;
    Sears tienda2;
    PalacioDeHierro tienda3;
    
    // Crear 3 tipos de TV
    SmartTV tv1("Samsung", "QLED", 11999.00, "Tizen");
    TV3D tv2("Hisense", "3D", 9989.00);
    TV tv3("Amazon", "Smart TV", 6499.00);
    
    // La persona compra la TV, la tienda procesa el pago y organiza la entrega, y la persona recibe la TV
    cliente.comprarTV(tv1);
    tienda1.pagoTarjeta(tv1, cliente);
    tienda1.entregaDomicilio(tv1, cliente);
    cliente.recibirTV(tv1);

    cout << tv1.toString() << endl;
    // Pruebas TV encender/apagar de al menos dos TV
    tv2.encender();
    cout << tv2.toString() << endl;
    tv3.apagar();
    cout << tv3.toString() << endl;

    // Pruebas de seleccionar entrada de al menos dos TV
    tv1.seleccionarEntrada("HDMI2");
    cout << "Entrada seleccionada: " << tv1.toString() << endl;
    tv2.seleccionarEntrada("HDMI");
    cout << "Entrada seleccionada: " << tv2.toString() << endl;

    // Acción de subir/bajar volumen de al menos dos TV
    // Subir volumen
    tv1.subirVolumen();
    tv1.subirVolumen();
    cout << "Volumen después de subir: " << endl;
    cout << tv1.toString() << endl;
    // Bajar el volumen
    tv2.bajarVolumen();
    cout << "Volumen después de bajar: " << endl;
    cout << tv2.toString() << endl;

    return 0;
}
