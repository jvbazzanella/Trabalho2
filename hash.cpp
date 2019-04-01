#include <iostream>
#include <cstddef> // Para usar o NULL
#include "hash.h"


Hash::Hash(int size) {
  MAX_ITEMS = size;
  cadastro  = new Veiculo*[size];

  for (int i = 0; i < size; i++) {
    cadastro[i] = NULL;
  }
  length    = 0;
}

int Hash::getLength() const
{
  return length;

}

void Hash::retrieveItem(Veiculo& veiculo, bool& found)
{
  int location= veiculo.getHash(MAX_ITEMS);
  if(cadastro[location]==NULL){
    found= false;
  }else{
    found= true;
    veiculo= *cadastro[location];
  }
}

void Hash::insertItem(Veiculo veiculo)
{
  int location= veiculo.getHash(MAX_ITEMS);

  cadastro[location]= new Veiculo(veiculo);
  length++;
}

void Hash::deleteItem(Veiculo veiculo)
{
  cout << "teste" << endl;
 int location= veiculo.getHash(MAX_ITEMS);
 delete cadastro[location];
 cadastro[location]=NULL;
 length--;
}

void Hash::print() const {
  std::cout << "INICIO" << std::endl;
  for (int i = 0; i < MAX_ITEMS; i++) {
    Veiculo* acc = cadastro[i];
    if (acc != NULL) {
	std::cout << i << ":" << acc->getCapacidade() <<", "  <<acc->getPotencia() <<", "  <<acc->getMarca() << std::endl;
      }
  }
  std::cout << "FIM" << std::endl;
}
