// main.cpp

#include "coche.h"
#include "vector.h"

int main(){
	/*
	coche* coche11 = new coche("Daewoo", "Tico"); // coche* tiene que tener el mismo nombre de la clase que se esta usando, un puntero de la clase 'coche'
	coche11 -> acelerar(20);
	coche11 -> acelerar(10);
	coche11 -> frenar(10);
	*/
	vector2D v1(3.0, 4.0);
	vector2D v3(4.0, 5.0);
	vector2D<float>* v2 = new vector2D(3.0f, 5.0f);
	cout << v1.magnitud() << endl;
	float mag = v2 -> magnitud();
	cout << mag << endl;
	
	//cout << v1.sumar(v3) << endl;
}
