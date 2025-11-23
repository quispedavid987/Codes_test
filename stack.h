#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>

// implementando la clase
template <typename T>
class Stack {
private:
	T* arr; //puntero al array dinamico
	int capacidad; //capacidad maxima de la pila
	int cima; //indice del elemento superior
public:
	Stack(int size = 10) : capacidad(size), cima(-1) {
		arr = new T[capacidad];
	}
	
	// Destructor, para liberar memoria
	~Stack(){
		delete[] arr;
	}
	
	// Metodos
	void push(const T& elemento) {
		if (cima == capacidad - 1) {
			throw std::overflow_error("Error: Stack lleno");	
		}
		arr[++cima] = elemento;
	}
	
	T pop() {
		if (cima == -1) {
			throw std::underflow_error("Error: Stack vacio");
		}
		return arr[cima--];
	}
	
	bool estaVacio() const {
		return cima == -1;
	}
	
	T peek() const {
		if (cima == -1) {
			throw std::underflow_error("Error: Stack vacio");
		}
		return arr[cima];
	}
};

#endif // STACK_H
