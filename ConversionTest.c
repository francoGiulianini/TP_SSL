#include "Conversion.c"
#include <assert.h>

static int MARGEN_DE_ERRROR = 0.00001;

double modulo(double numero);
int casi_iguales (double numero1, double numero2);

int main() {
	assert(casi_iguales(32.00, convertirAFahr(0.00)));
	assert(casi_iguales(-0.04, convertirAFahr(-17.80)));
	assert(casi_iguales(148.88888, convertirACelsius(300.00)));
	assert(casi_iguales(572.00, convertirAFahr(300.00)));
	assert(casi_iguales(71.11111, convertirACelsius(160.00)));
	assert(casi_iguales(159.98, convertirAFahr(71.10)));

	return EXIT_SUCCESS;
}

int casi_iguales (double numero1, double numero2){
	return (modulo(numero1 - numero2) <= MARGEN_DE_ERRROR);
}

double modulo(double numero){
	if(numero < 0) return -numero;
	else return numero;
}
