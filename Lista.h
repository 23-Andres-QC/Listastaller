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
        void eliminarvalor(int valor);

        Node* head;
};
void hacerlistainterseccion(List* A,List* B);
class NodeLetras
{
    public:
        NodeLetras(char v);
        void show(){cout<<valor<<" ";};
        void set_value(char v){this->valor=v;};
        char get_value(){return this->valor;};
        void set_next(NodeLetras* n){this->nxt=n;};
        NodeLetras* get_next(){return this->nxt;};
    private:
        char valor;
        NodeLetras* nxt;
};
class ListLetras
{
    public:
        ListLetras(){head = nullptr;};
        void addletra(char v);
        void add_backletras(char v);
        int verificarpalindromo(ListLetras*A);
        void showletras();

        NodeLetras* head;
};
#endif // LISTA_H
