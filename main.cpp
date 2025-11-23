// main.cpp

#include "coche.h"

int main(){
	coche* coche11 = new coche("Daewoo", "Tico"); // coche* tiene que tener el mismo nombre de la clase que se esta usando, un puntero de la clase 'coche'
	coche11 -> acelerar(20);
	coche11 -> acelerar(10);
	coche11 -> frenar(10);
}
