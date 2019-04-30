#ifndef HEAP_H
#define HEAP_H


#include <iostream>
#include <string>
#include "books.h"
#include "ebook.h"
#include "hardcover.h"

class Heap{
 public:
  Heap(int MAX_ITEMS = 10);
  ~Heap();
  bool isEmpty() const;
  bool isFull()  const;
  void print()   const;
  void enqueue(Book* newItem);
  void enqueue(Ebook* newItem);
  void enqueue(Hardcover* newItem);
  Book* dequeue();


 private:
  int MAX_ITEMS;
  int length;
  Book** cadastro;
  void descida();
  void subida();
};

#endif
