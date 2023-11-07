#include <iostream>
#include "Lista.h"
#include <vector>
using namespace std;

int main()
{
    cout<<"Ejercicio 01: Invertir "<<endl;
    List * D=new List();
    D->add(1);
    D->add(2);
    D->add(3);
    D->add(4);
    D->add(5);
    D->add(6);
    D->add(7);
    D->add(8);
    D->show();
    cout<<endl;
    D->invertir(D);
    cout<<endl;
     D->show();
    cout<<"====verificarpalindromo============================="<<endl;
    cout<<"Ejercicio02: Palindromo"<<endl;
    ListLetras*A=new ListLetras();
    string palabra;
    cout<<"Ingresa la palabra palindroma: "<<endl;
    cin>>palabra;
    for(int i=0; i<palabra.size();i++){
        A->addletra(palabra[i]);
    }
    A->showletras();
    cout<<endl;
    if(A->verificarpalindromo(A)==true){
        A->showletras();
        cout<<endl;
        cout<<"La lista es palindroma "<<endl;
    }else{
        cout<<"La lista no es palindroma "<<endl;
    }

    cout<<"================================="<<endl;

    cout<<"Ejercicio03: Eliminar posicion"<<endl;
    cout<<endl;
    D->show();
    cout<<endl;
    D->eliminar(3);
    D->show();
    cout<<endl;

   cout<<"================================="<<endl;

    cout<<"Ejercicio04: Lista de interseccion "<<endl;
   List*F=new List();
    F->add(1);
    F->add(4);
    F->add(5);
    F->add(6);
    F->add(2);
    F->add(3);
    F->show();
    cout<<endl;
    List*G=new List();
    G->add(4);
    G->add(5);
    G->add(6);
    G->add(7);
    G->add(8);
    G->show();
    cout<<endl;
    hacerlistainterseccion(F,G);
    cout<<endl;

    cout<<"================================="<<endl;

    cout<<"Ejercicio 05: Eliminar valor"<<endl;
    List*H=new List();
    H->add(1);
    H->add(2);
    H->add(3);
    H->add(4);
    H->add(5);
    H->show();
    cout<<endl;
    H->eliminarvalor(2);
    H->show();
}

