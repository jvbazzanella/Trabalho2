#include <iostream>
#include "books.h"
#include "ebook.h"
#include "hardcover.h"
#include "heap.h"
using namespace std;

int main()
{
    int num;
    string ch[5];
    int in[3];
    cout << "Insira o numero maximo de itens da sua tabela: " << endl;
    cin >> num;
    Heap h(num);
    num=0;
    while (num!=6){
    cout << "Escolha uma atividade:" << endl;
    cout << "1 - Inserir livro" << endl;
    cout << "2 - Inserir ebook" << endl;
    cout << "3 - Inserir livro de capa dura" << endl;
    cout << "4 - Remover livro" << endl;
    cout << "5 - Imprimir a heap" << endl;
    cout << "6 - Encerrar programa" << endl;
    cin >> num;
    switch (num){
        case 1:{
            cout << "Insira o titulo sem espacos: " << endl;
            cin >> ch[0];
            cout << "Insira os 9 primeiros digitos do codigo ISBN: " << endl;
            cin >> in[0];
            cout << "Insira o sobrenome do autor: " << endl;
            cin >> ch[1];
            cout << "Insira o genero: " << endl;
            cin >> ch[2];
            cout << "Insira o idioma original: " << endl;
            cin >> ch[3];
            cout << "Insira o ano de lancamento: " << endl;
            cin >> in[1];
            Book *book1 = new Book(ch[0], in[0], ch[1], ch[3], in[1], ch[2]);
            h.enqueue(book1);
            break;
        }
        case 2:{
            float fl;
            cout << "Insira o titulo sem espacos: " << endl;
            cin >> ch[0];
            cout << "Insira os 9 primeiros digitos do codigo ISBN: " << endl;
            cin >> in[0];
            cout << "Insira o sobrenome do autor: " << endl;
            cin >> ch[1];
            cout << "Insira o genero: " << endl;
            cin >> ch[2];
            cout << "Insira o idioma original: " << endl;
            cin >> ch[3];
            cout << "Insira o ano de lancamento: " << endl;
            cin >> in[1];
            cout << "Insira o numero de vendas online: " << endl;
            cin >> fl;
            cout << "Insira o nome da plataforma onde esta disponivel: " << endl;
            cin >> ch[4];
            Ebook *book2 = new Ebook(ch[0], in[0], ch[1], ch[3], in[1], ch[2], fl, ch[4]);
            h.enqueue(book2);
            break;
        }
        case 3:{
            cout << "Insira o titulo sem espacos: " << endl;
            cin >> ch[0];
            cout << "Insira os 9 primeiros digitos do codigo ISBN: " << endl;
            cin >> in[0];
            cout << "Insira o sobrenome do autor: " << endl;
            cin >> ch[1];
            cout << "Insira o genero: " << endl;
            cin >> ch[2];
            cout << "Insira o idioma original: " << endl;
            cin >> ch[3];
            cout << "Insira o ano de lancamento: " << endl;
            cin >> in[1];
            cout << "Insira 1 caso haja orelha na capa e 0 caso não haja: " << endl;
            cin >> in[2];
            cout << "Insira o material da capa: " << endl;
            cin >> ch[4];
            Hardcover *book3 = new Hardcover(ch[0], in[0], ch[1], ch[3], in[1], ch[2], in[2], ch[4]);
            h.enqueue(book3);
            break;
        }
        case 4:{
            Book* temp = h.dequeue();
            if(temp!=NULL){
                temp->print();
            }
            break;
        }
        case 5:{
            h.print();
            break;
        }
        case 6:{
            cout << "Fim" << endl;
            break;
        }
        default:{
            cout << "Comando invalido" << endl;
            break;
        }
    }
    }
    return 0;
}
