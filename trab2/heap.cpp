#include <iostream>
#include <iomanip>
#include "heap.h"
using namespace std;

Heap::Heap(int MAX_ITEMS){
  this->MAX_ITEMS = MAX_ITEMS;
  cadastro  = new Book*[MAX_ITEMS];
  for (int i = 0; i < MAX_ITEMS; i++) {
    cadastro[i] = NULL;
  }
  length = 0;
}

Heap::~Heap(){}

void Heap::subida(){
    int m = length-1,j = (m-1)/2;
    Book* temp = cadastro[m];
    while (m>=1 && cadastro[j]->getPriority()<temp->getPriority()){
        cadastro[m]=cadastro[j];
        m=j;
        j=(j-1)/2;
    }
    cadastro[m]=temp;
}

void Heap::descida(){
    int m = 0,j = 1;
    Book* temp = cadastro[m];
    while (j<length){
        if (j<length-1&&cadastro[j]->getPriority()<cadastro[j+1]->getPriority()){
            j++;
        }
        if (temp->getPriority()<cadastro[j]->getPriority()){
            cadastro[m]=cadastro[j];
            m=j;
            j=2*m+1;
        }
        else
            break;
    }
    cadastro[m]=temp;
}

bool Heap::isEmpty() const {
    for (int i = 0; i < MAX_ITEMS; i++) {
        if(cadastro[i] != NULL){
            return false;
        }
    }
    return true;
}

bool Heap::isFull() const {
    for (int i = 0; i < MAX_ITEMS; i++) {
        if(cadastro[i] == NULL){
            return false;
        }
    }
    return true;
}

void Heap::print() const {
  cout << "INI" << endl;
  for (int i = 0; i < length; i++) {
        cout << i+1 << ":" << endl;
        cadastro[i]->print();
  }
  cout << "FIM" << endl;
}

void Heap::enqueue(Book *newItem){
    if (isFull()){
        cout << "heap cheia, remova itens" << endl;
    }
    else {
        cadastro[length]=newItem;
        this->length++;
        subida();
    }
}

void Heap::enqueue(Ebook *newItem){
    if (isFull()){
        cout << "heap cheia, remova itens" << endl;
    }
    else {
        cadastro[length]=newItem;
        this->length++;
        subida();
    }
}

void Heap::enqueue(Hardcover *newItem){
    if (isFull()){
        cout << "heap cheia, remova itens" << endl;
    }
    else {
        cadastro[length]=newItem;
        this->length++;
        subida();
    }
}

Book* Heap::dequeue(){
    if (isEmpty()){
        cout << "heap vazia, insira itens" << endl;
        return NULL;
    }
    else{
        Book* temp = cadastro[0];
        this->length--;
        cadastro[0]=cadastro[length];
        descida();
        cout << "livro removido" << endl;
        return temp;
    }
}
