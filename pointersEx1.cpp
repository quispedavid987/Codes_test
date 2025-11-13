#include<iostream>
using namespace std;
/*
Primer ejercicio de punteros:
Declara una variable con un valor 10, declara un puntero a esta variable
Imprime el valor y la direccion de memoria
Utiliza el puntero para cambiar de valor a la variable, a 50
*/

int num = 10;
int* num_ptr = &num;
int main(){
	cout << "El valor original: " << *num_ptr << ", con direccion: " << num_ptr << endl;
	cout << "Cambiando el valor..." << endl;
	*num_ptr = 50; // Cambiando el valor de la variable dede el puntero
	cout << "El valor nuevo: " << num << ", con direccion: " << num_ptr << endl;
}
