#include "Lista.h"
Node::Node(int v)
{
    this->value = v;
    this->nxt = nullptr;
}
void List::add(int v){
    Node* p = new Node(v);
    if(this->head == nullptr)
        this->head = p;
    else{
        p->set_next(this->head);
        this->head = p;
    }
}
void List::add_back(int v){
    Node* p = new Node(v);
    if(this->head == nullptr)
        this->head = p;
    else{
        Node* q = this->head;
        while(q->get_next()!= nullptr){
            q = q->get_next();
            }
        q->set_next(p);
    }
}
void List::show(){
   Node* q = this->head;
   while (q!= nullptr){
    q->show();
    q = q->get_next();
   }
   cout<<endl;
}
void List::invertir(List* A) {
    Node* condicion=nullptr;
    Node* actual=A->head;
    Node* next=nullptr;

    while (actual!= nullptr) {
        next = actual->get_next();
        actual->set_next(condicion);
        condicion = actual;
        actual = next;
    }
    A->head = condicion;
}

void List::eliminar(int ix){
    Node* p = this->head;
    int c = 0;
    Node* bef = nullptr;
    if(ix<0)
        return;

    while (p!= nullptr){
        if(c!=ix-1){
            bef = p;
            p = p->get_next();
            c++;
        }
        else{
            bef->set_next(p->get_next());
            p->set_next(nullptr);
            delete p;
            return;
        }
    }
}
void hacerlistainterseccion(List* A,List* B){
    Node* a=A->head;
    List C;
    while(a!=nullptr){
        Node* b=B->head;
        while(b!=nullptr){
            if(a->get_value()==b->get_value()){
                C.add(a->get_value());
            }
                b=b->get_next();
        }
        a=a->get_next();
    }
    Node *c=C.head;
    while(c!=nullptr){
        c->show();
        c=c->get_next();
    }
};
void List::eliminarvalor(int valor) {
    Node* p=this->head;
    Node* bef=nullptr;

    while (p != nullptr) {
        if (p->get_value()==valor){
            if (bef != nullptr){
                bef->set_next(p->get_next());
            }else{
                this->head=p->get_next();
            }
            p->set_next(nullptr);
            delete p;
            return;
        }
        bef=p;
        p=p->get_next();
    }
}
Node::~Node() {
}

NodeLetras::NodeLetras(char v){
    this->valor=v;
    this->nxt=nullptr;
}
void ListLetras::addletra(char v){
    NodeLetras* p = new NodeLetras(v);
    if(this->head == nullptr)
        this->head = p;
    else{
        p->set_next(this->head);
        this->head = p;
    }
}
void ListLetras::add_backletras(char v){
    NodeLetras* p = new NodeLetras(v);
    if(this->head == nullptr)
        this->head = p;
    else{
        NodeLetras* q = this->head;
        while(q->get_next()!= nullptr){
            q = q->get_next();
            }
        q->set_next(p);
    }
}
void ListLetras::showletras(){
   NodeLetras* q = this->head;
   while (q!= nullptr){
    q->show();
    q = q->get_next();
   }
   cout<<endl;
}
int ListLetras::verificarpalindromo(ListLetras *A) {
    NodeLetras *a = A->head;
    ListLetras B;
    ListLetras C;
    while (a != nullptr) {
        B.add_backletras(a->get_value());
        C.addletra(a->get_value());
        a = a->get_next();
    }
    NodeLetras *b = B.head;
    NodeLetras *c = C.head;
    while (b != nullptr && c != nullptr){
        if (b->get_value() != c->get_value()) {
            return false;
        }
        b = b->get_next();
        c = c->get_next();
    }
    return true;
}

