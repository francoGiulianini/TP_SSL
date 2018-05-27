#include "conversion.h"
#include "conversion.c"
#include <assert.h>

double modulo(double numero);
int casi_igual (double numero1, double numero2);

int main() {
	assert(casi_igual(32.00, convertirAFahr(0.00)));
	assert(casi_igual(-0.04, convertirAFahr(-17.80)));
	assert(casi_igual(148.88888, convertirACelsius(300.00)));
	assert(casi_igual(572.00, convertirAFahr(300.00)));
	assert(casi_igual(71.1111, convertirACelsius(160.00)));
	assert(casi_igual(159.98, convertirAFahr(71.10)));
}

int casi_igual (double numero1, double numero2){
	return (modulo(numero1 - numero2) <= 0.0001);
}

double modulo(double numero){
	if(numero < 0) return -numero;
	else return numero;
}