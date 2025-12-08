#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include "types.h"
#include<utility>
#include<iostream>
using namespace std;

// DECLARACION DE QUE EXISTIRA UNA CLASE CLINKEDLIST PARA QUE LA ESTRUCTURA DEL NODO LA RECONOZCA
template <typename T>
class CLinkedList;

//***** ESTRCUTURA DEL NODO
template <typename T>
class LLNode {
private:
    using Type = T; // alias internos
    friend class CLinkedList<T>; // solo esta clase puede acceder a los privados
    Type m_data; // dato en el nodo
    Ref m_ref; // referencia del nodo
    LLNode<T>* m_pNext; // puntero al siguiente nodo

public:
    LLNode(Type &elem, Ref ref, LLNode<T>* pNext = nullptr)
        : m_data(elem), m_ref(ref), m_pNext(pNext) {} // constructor de la clase
    
    // Metodos
    Type GetData() {return m_data;} // devuelve el dato en el nodo
    Ref  GetRef()  {return m_ref;} // devielve la referencia del nodo
    LLNode<T>* GetNext() {return m_pNext;} // devuelve el puntero al sigueinte nodo
};

//*****  ESTRCUTURA DE LA LISTA
template <typename T>
class CLinkedList {
private:
    using Type = T;
    using Node = LLNode<T>; // alias para el nodo
    Node* m_pHead; // primer nodo
public:
    CLinkedList() : m_pHead(nullptr) {} // generando lista vacia

    // metodos
    void Insert(Type &elem, Ref ref);
};

template <typename T>
void CLinkedList<T> :: Insert(Type &elem, Ref ref){
    Node* nuevo = new Node(elem, ref, m_pHead); //creamos el nodo
    m_pHead = nuevo; // la cabeza apunta al nuevo nodo
    cout << "Lista: " << nuevo.GetData() << endl;
}

#endif