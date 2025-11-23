#ifndef COCHE_H
#define COCHE_H

#include <iostream>
#include <string>

using namespace std;

class coche {
private:
	string marca;
	string modelo;
	int VelocidadActual;
	const int VelocidadLimite = 150; //MAXIMO VALOR PARA VELOCIDAD

public:
	coche(string _marca, string _modelo) : marca(_marca), modelo(_modelo), VelocidadActual(0) {
		cout << "Coche creado --> " << marca << " " << modelo << endl;
		cout << "-------------------" << endl;
	}
	
	//metodos
	void acelerar(int aumento) {
		VelocidadActual += aumento;
		if (VelocidadActual >= VelocidadLimite) {
			cout << "Cuidado! supertaste el límite con: " << VelocidadActual << " km/s" << ", estableciando velocidad límite!" << endl;
			VelocidadActual = VelocidadLimite;
		}
		cout << "Aumentando velocidad en: " << aumento << " km/s" << endl;
		cout << "Velocidad actual: " << VelocidadActual << " km/s" << endl;
		cout << "-------------------" << endl;
	}
	
	void frenar(int disminucion);
};

void coche :: frenar(int disminucion) {
	VelocidadActual -= disminucion;
	if (VelocidadActual < 0) {
		cout << "Cuidado, velocidad negatica, regresando a 0." << endl;
		VelocidadActual = 0;
	}
	cout << "Frenando en: " << disminucion << " km/s." << endl;
	cout << "Velocidad actual: " << VelocidadActual << " km/s." << endl;
	cout << "-------------------" << endl;
}
#endif
