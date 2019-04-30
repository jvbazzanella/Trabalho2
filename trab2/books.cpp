#include <iostream>
#include <iomanip>
#include <string>
#include "books.h"
using namespace std;

Book::Book(string t, int i, string a, string l, int y, string g) : title(t), isbn(i), author(a), language(l), year(y), genre(g) {}

string Book::getTitle() const{
    return title;
}

int Book::getISBN() const{
    return isbn;
}

string Book::getAuthor() const{
    return author;
}

string Book::getLanguage() const{
    return language;
}

int Book::getYear() const{
    return year;
}

string Book::getGenre() const{
    return genre;
}

void Book::print() {
cout << "Titulo do livro: " << title << endl;
cout << "Codigo ISBN: ";
cout << setfill('0');
cout << left << setw(13) << isbn << endl;
cout << "Autor: " << author << endl;
cout << "Genero: " << genre << endl;
cout << "Idioma original: " << language << endl;
cout << "Ano de publicacao: ";
cout << year << endl;
}

int Book::getPriority() const {
    return this->isbn;
}
