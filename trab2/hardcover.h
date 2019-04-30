#ifndef HARDCOVER_H
#define HARDCOVER_H

#include "books.h"

class Hardcover: public Book{
private:
    int duskjacket;
    string covermaterial;
public:
    Hardcover(string = "unspecified", int = 0, string = "unspecified", string = "unspecified", int = 0, string = "unspecified", int = 0, string = "buckram");
    int getDuskJacket() const;
    string getCoverMaterial() const;
    void print();
};

#endif // HARDCOVER_H
