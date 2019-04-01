#include <string>
#include <iomanip>
#include <iostream>
#include "barco.h"

using namespace std;

Barco::Barco(int capc) : cap_carga(capc){ }

int Barco::getCap_carga() const{
    return cap_carga;
}

void Barco::setCap_carga(int capc){
    cap_carga = capc;
}

int Barco::getHash(int max_number) const{
int temp=1;

 for (unsigned i=0; i<4; ++i){
    temp *= marca.at(i);
}

return ((temp + capacidade + potencia + cap_carga) / 100)%max_number;

}
