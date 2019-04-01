#include <iostream>
#include <iomanip>
#include "veiculo.h"
#include <string>

using namespace std;

Veiculo::Veiculo(string m, int cav, int cap, string pla) : marca(m), potencia(cav), capacidade(cap), placa(pla) {}

string Veiculo::getMarca() const {
  return marca;
}

int Veiculo::getPotencia() const {
  return potencia;
}

int Veiculo::getCapacidade() const {
  return capacidade;
}

string Veiculo::getPlaca() const {
  return placa;
}

void Veiculo::setMarca(string m) {
  marca=m;
}

void Veiculo::setPotencia(int cav) {
  potencia=cav;
}

void Veiculo::setCapacidade(int cap){
  capacidade=cap;
}

void Veiculo::setPlaca(string pla){
  placa=pla;
}

int Veiculo::getHash(int max_number) const{
int temp=1;

 for (unsigned i=0; i<4; ++i){
    temp *= marca.at(i);
}

return ((temp + capacidade + potencia) / 100)%max_number;

}
