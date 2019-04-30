#include <iostream>
#include <iomanip>
#include "hardcover.h"
using namespace std;

Hardcover::Hardcover(string t, int i, string a, string l, int y, string g, int d, string c) : Book(t,i,a,l,y,g), duskjacket(d), covermaterial(c) {}

int Hardcover::getDuskJacket() const{
    return duskjacket;
}

string Hardcover::getCoverMaterial() const{
    return covermaterial;
}

void Hardcover::print() {
    Book::print();
    if (this->duskjacket==0){
        cout << "Sem orelha" << endl;
    }
    else{
        cout << "Com orelha" << endl;
    }
    cout << "Material da capa: " << covermaterial << endl;
}
