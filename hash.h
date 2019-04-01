#ifndef HASH_H
#define HASH_H

#include<iostream>
#include<string>
#include "veiculo.h"

class Hash {

  private:
  int MAX_ITEMS;
  int length;
  Veiculo** cadastro;

  public:
  Hash (int size=20);
  int getLength() const;
  void retrieveItem(Veiculo& veiculo, bool& found);
  void insertItem(Veiculo veiculo);
  void deleteItem(Veiculo veiculo);
  void print() const;

};

#endif
