#include <iostream>
#include <iomanip>
#include "ebook.h"
using namespace std;

Ebook::Ebook(string t, int i, string a, string l, int y, string g, float v, string p) : Book(t,i,a,l,y,g), virtualsales(v), platform(p) {}

float Ebook::getVirtual() const{
    return virtualsales;
}

void Ebook::setVirtual(float virtualsales){
    this->virtualsales=virtualsales;
}

string Ebook::getPlatform() const{
    return platform;
}

void Ebook::print() {
    Book::print();
    cout << "Vendas virtuais: " << virtualsales << "dolares" << endl;
    cout << "Plataforma: " << platform << endl;
}
