#include "Conversion.h"
#include <assert.h>
#include <stdlib.h>

static const int MARGEN_DE_ERRROR = 0.00001;

double modulo(double numero);
int casi_iguales (double numero1, double numero2);

int main() {

	assert(casi_iguales(32.00, convertirAFahr(0.00)));
	assert(casi_iguales(-0.04, convertirAFahr(-17.80)));
	assert(casi_iguales(148.88, convertirACelsius(300.00)));
	assert(casi_iguales(572.00, convertirAFahr(300.00)));
	assert(casi_iguales(71.11, convertirACelsius(160.00)));
	assert(casi_iguales(159.98, convertirAFahr(71.10)));
	return EXIT_SUCCESS;

}

int casi_iguales (double numero1, double numero2){
	return ((modulo(numero1) - modulo(numero2)) <= MARGEN_DE_ERRROR);
}

double modulo(double numero){
	if(numero < 0) return -numero;
	else return numero;
}
