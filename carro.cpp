#include "carro.h"

using namespace std;

Carro::Carro(string t) : tipo(t) {}

string Carro::getTipo() const{
    return tipo;
}

void Carro::setTipo( string t){
    tipo = t;
}

int Carro::getHash(int max_number) const{
int temp=1;

 for (unsigned i=0; i<4; ++i){
    temp *= marca.at(i);
}
int temp2=1;

 for (unsigned i=0; i<4; ++i){
    temp2 *= tipo.at(i);
}

return ((temp + capacidade + potencia + temp2) / 100)%max_number;

}
