#ifndef HEAP_H
#define HEAP_H


#include <iostream>
#include <string>
#include "veiculo.h"
#include "carro.h"
#include "barco.h"

class Heap{
 public:
  Heap(int MAX_ITEMS = 10);
  ~Heap();
  bool isEmpty() const;
  bool isFull()  const;
  void print()   const;
  void enqueue(Veiculo* newItem);
  void enqueue(Carro* newItem);
  void enqueue(Barco* newItem);
  Book* dequeue();


 private:
  int MAX_ITEMS;
  int length;
  Veiculo** cadastro;
  void descida();
  void subida();
};

#endif
