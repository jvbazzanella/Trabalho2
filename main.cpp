#include <string>
#include <iomanip>
#include <iostream>
#include "carro.h"
#include "veiculo.h"
#include "barco.h"
#include "hash.h"

using namespace std;

int main(){
int i, op;
string placa;
bool t;

//erro a main e no print
//Veiculo aut1 = Veiculo();
//Carro aut2 = Carro();
//Barco aut3 = Barco();
Veiculo aut1;
Carro aut2;
Barco aut3;

int pot, cap, capc;
string mar, tip, pla;

Hash lista= Hash();


while (i!=1){
  cout<<"Bem vindo"<< endl;
  cout<<"Digite 1 para sair:"<< endl;
  cout<<"Digite 2 para listar:"<< endl;
  cout<<"Digite 3 para remover:"<< endl;
  cout<<"Digite 4 para inserir:"<< endl;

  cin>>i;

  switch (i){

//fecha o aplicativo
    case 1:
    cout<<"tchau"<< endl;
    break;

//lista todos veiculos
    case 2:
    lista.print();
    break;
//faz a remoção de um veiculo
    case 3:
    cout<<"digite 1 para generico, digite 2 para carro e digite 3 para barco"<< endl;
    cin>>op;

    switch (op){
      case 1:
      cout<<"digite a marca"<<endl;
      cin.ignore();
      getline (cin, mar);

      cout<<"digite a potencia"<<endl;
      cin>>pot;

      cout<<"digite a capacidade"<<endl;
      cin>>cap;

      cout<<"digite a placa"<<endl;
      cin.ignore();
      getline (cin, pla);

      aut1.setMarca(mar);
      aut1.setPotencia(pot);
      aut1.setCapacidade(cap);
      aut1.setPlaca(pla);
      h.enqueue(aut1);
    lista.retrieveItem(aut1,t);

    if (t==true){
      lista.deleteItem(aut1);
    }else{
      cout<<"veiculo não existe"<< endl;
    }
      break;

      case 2:
        cout<<"digite a marca"<<endl;
        cin.ignore();
        getline (cin, mar);

        cout<<"digite a potencia"<<endl;
        cin>>pot;

        cout<<"digite a capacidade"<<endl;
        cin>>cap;

        cout<<"digite a placa"<<endl;
        cin.ignore();
        getline (cin, pla);

        cout<<"digite o tipo"<< endl;
        getline (cin, tip);

        aut2.setMarca(mar);
        aut2.setPotencia(pot);
        aut2.setCapacidade(cap);
        aut2.setPlaca(pla);
        aut2.setTipo(tip);
        h.enqueue(aut2)
        lista.retrieveItem(aut2,t);

      if (t==true){
        lista.deleteItem(aut2);
      }else{
        cout<<"carro não existe"<< endl;
      }
      break;

      case 3:
      cout<<"digite a marca"<<endl;
      cin.ignore();
      getline (cin, mar);

      cout<<"digite a potencia"<<endl;
      cin>>pot;

      cout<<"digite a capacidade"<<endl;
      cin>>cap;

      cout<<"digite a placa"<<endl;
      cin.ignore();
      getline (cin, pla);

      cout<<"digite a capacidade de carga"<< endl;
      cin>>capc;

      aut3.setMarca(mar);
      aut3.setPotencia(pot);
      aut3.setCapacidade(cap);
      aut3.setPlaca(pla);
      aut3.setCap_carga(capc);
      h.enqueue(aut3);
      lista.retrieveItem(aut3,t);

    if (t==true){
      lista.deleteItem(aut3);
    }else{
      cout<<"barco não existe"<< endl;
    }
    break;
  }
    break;

//faz a inserção de um veiculo
    case 4:
    cout<<"digite 1 para generico, digite 2 para carro e digite 3 para barco"<< endl;
    cin>>op;

    switch (op){
      case 1:
      cout<<"digite a marca"<<endl;
      cin.ignore();
      getline (cin, mar);

      cout<<"digite a potencia"<<endl;
      cin>>pot;

      cout<<"digite a capacidade"<<endl;
      cin>>cap;

      cout<<"digite a placa"<<endl;
      cin.ignore();
      getline (cin, pla);

      aut1.setMarca(mar);
      aut1.setPotencia(pot);
      aut1.setCapacidade(cap);
      aut1.setPlaca(pla);

    lista.retrieveItem(aut1,t);

    if (t==true){
        cout<<"veiculo já cadastrado"<< endl;
    }else{
      lista.insertItem(aut1);
    }
      break;

      case 2:
        cout<<"digite a marca"<<endl;
        cin.ignore();
        getline (cin, mar);

        cout<<"digite a potencia"<<endl;
        cin>>pot;

        cout<<"digite a capacidade"<<endl;
        cin>>cap;

        cout<<"digite a placa"<<endl;
        cin.ignore();
        getline (cin, pla);

        cout<<"digite o tipo"<< endl;
        getline (cin, tip);

        aut2.setMarca(mar);
        aut2.setPotencia(pot);
        aut2.setCapacidade(cap);
        aut2.setPlaca(pla);
        aut2.setTipo(tip);

      lista.retrieveItem(aut2,t);

      if (t==true){
        cout<<"carro já cadastrado"<< endl;
      }else{
        lista.insertItem(aut2);
      }
      break;

      case 3:
      cout<<"digite a marca"<<endl;
      cin.ignore();
      getline (cin, mar);

      cout<<"digite a potencia"<<endl;
      cin>>pot;

      cout<<"digite a capacidade"<<endl;
      cin>>cap;

      cout<<"digite a placa"<<endl;
      cin.ignore();
      getline (cin, pla);

      cout<<"digite a capacidade de carga"<< endl;
      cin>>capc;

      aut3.setMarca(mar);
      aut3.setPotencia(pot);
      aut3.setCapacidade(cap);
      aut3.setPlaca(pla);
      aut3.setCap_carga(capc);

    lista.retrieveItem(aut3,t);

    if (t==true){
      cout<<"barco já cadastrado"<< endl;
    }else{
      lista.insertItem(aut3);
    }
    break;

    }
  }
}
    return 0;
}
