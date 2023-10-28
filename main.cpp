#include <iostream>
#include "Lista.h"
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
    cout<<"================================="<<endl;
    cout<<"Ejercicio02: Palindromo"<<endl;
    List*A=new List();
    A->add(1);
    A->add(2);
    A->add(3);
    A->add(2);
    A->add(1);
    List*B=new List();
    B->add(1);
    B->add(2);
    B->add(2);
    B->add(1);
    List *I=new List();
    I->add(8);
    I->add(9);
    I->add(10);
    I->add(8);
    I->add(9);
    if(A->verificarpalindromo(A)==true){
        A->show();
        cout<<endl;
        cout<<"La lista es palindroma "<<endl;
    }else{
        cout<<"La lista no es palindroma "<<endl;
    }
    cout<<"================================="<<endl;
    if(B->verificarpalindromo(B)==true){
        B->show();
        cout<<endl;
        cout<<"La lista es palindroma "<<endl;
    }else{
        cout<<"La lista no es palindroma "<<endl;
    }
    cout<<"================================="<<endl;
    if(I->verificarpalindromo(I)==true){
        I->show();
        cout<<endl;
        cout<<"La lista es palindroma "<<endl;
    }else{
        I->show();
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

