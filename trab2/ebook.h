#ifndef EBOOK_H
#define EBOOK_H

#include "books.h"

class Ebook : public Book{
private:
    float virtualsales;
    string platform;
public:
    Ebook(string = "unspecified", int = 0, string = "unspecified", string = "unspecified", int = 0, string = "unspecified", float = 0, string = "unspecified");
    float getVirtual() const;
    void setVirtual(float virtualsales);
    string getPlatform() const;
    void print();
};

#endif
