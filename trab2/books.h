#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        string title;
        int isbn;
        string author;
        string language;
        int year;
        string genre;

    public:
        Book(string = "unspecified", int = 0, string = "unspecified", string = "unspecified", int = 0, string = "unspecified");
        string getTitle() const;
        int getISBN() const;
        string getAuthor() const;
        string getLanguage() const;
        int getYear() const;
        string getGenre() const;
        virtual void print();
        int  getPriority() const;
};

#endif // BOOKS_H
