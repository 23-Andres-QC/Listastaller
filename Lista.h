#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

class Node
{
    public:
        Node(int v);
        virtual ~Node();
        void show(){cout<<value<<" ";};
        void set_value(int v){this->value=v;};
        int get_value(){return this->value;};
        void set_next(Node* n){this->nxt=n;};
        Node* get_next(){return this->nxt;};
    private:
        int value;
        Node* nxt;
};
class List
{
    public:
        List(){head = nullptr;};
        void add(int v);
        void add_back(int v);
        void show();
        void invertir(List*A);
        void eliminar(int ix);
        int verificarpalindromo(List*A);
        void eliminarvalor(int valor);

        Node* head;
};
void hacerlistainterseccion(List* A,List* B);
#endif // LISTA_H
