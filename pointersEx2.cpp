#include<iostream>
using namespace std;

/*
Declaramos una variable double llamada precio, con valor 99.90
Declaramos su alias double& alias_precio
Imprimimos los valores iniciales
cambiamos el alias a otro valor
vemos que pasa
*/

void ejercicio2(){
	double precio = 99.90;
	double& alias_precio = precio; // Declaranco el alias

	cout << "Valor del precio: " << precio << endl;
	cout << "Direccion de memoria: " << &precio << endl;
	cout << "Valor del alias: " << alias_precio << endl;
	cout << "Direccion de memoria: " << &alias_precio << endl;
	// Recuerda: tanto la variable como el alias tienen la misma
	// direccion de memoria
	cout << "Ahora cambiamos el valor...." << endl;
	alias_precio = 73.50; // Cuando cambiamos el alias, tambien afecta al precio
	cout << "Nuevo valor del precio: " << precio << endl;
	cout << "Direccion de memoria: " << &precio << endl;
	cout << "Nuevo valor del alias: " << alias_precio << endl;
	cout << "Direccion de memoria: " << &alias_precio << endl;
	
}

int main(){
	ejercicio2();
}
