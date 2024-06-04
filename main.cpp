#include <iostream>
#include <vector>
#include "TVSmart.hpp"
#include "TVLCD.hpp"
#include "TVLED.hpp"

using namespace std;

int main() {
    vector<TV*> televisores;
    
    TVSmart tv1;
    TVLCD tv2;
    TVLED tv3;
    TVSmart tv4;
    TVLCD tv5;
    
    televisores.push_back(&tv1);
    televisores.push_back(&tv2);
    televisores.push_back(&tv3);
    televisores.push_back(&tv4);
    televisores.push_back(&tv5);

    for(TV* tv : televisores) {
        tv->encender();
        cout << tv->toString() << endl;
    }

    for(TV* tv : televisores) {
        tv->seleccionarEntrada("HDMI3");
        cout << tv->toString() << endl;
    }

    for(TV* tv : televisores) {
        tv->subirVolumen();
        cout << tv->toString() << endl;
    }

    for(TV* tv : televisores) {
        tv->bajarVolumen();
        cout << tv->toString() << endl;
    }

    for(TV* tv : televisores) {
        tv->apagar();
        cout << tv->toString() << endl;
    }

    return 0;
}
