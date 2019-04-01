#ifndef VEICULO_H
#define VEICULO_H
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

  class Veiculo{

  protected:

    string marca;
    int potencia;
    int capacidade;
    string placa;

  public:

    //Veiculo(string placa="p", string marca="n", int potencia=0, int capacidade=0);
    Veiculo(string marca="n", int potencia=0, int capacidade=0, string placa="p");

    string getMarca() const;
    int getPotencia() const;
    int getCapacidade() const;
    string getPlaca() const;
    int virtual getHash(int max_number) const;

    void setMarca(string marca);
    void setPotencia(int potencia);
    void setCapacidade(int capacidade);
    void setPlaca(string placa);
  };
#endif
