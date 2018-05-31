#include "Conversion.h"

void printFila(double num1, double num2) {
	printf("%3.0f %6.1f\n", num1, num2);
}

void printFilas(int lower, int upper, int step, double (* ptr)(double)) {
	for(int i = lower; i <= upper; i = i + step)
 		printFila(i, (* ptr)(i));
}

void printTablaCelsius(int lower, int upper, int step) {
	double (* fptr)(double);
	fptr = convertirAFahr;
	printFilas(lower, upper, step, fptr);
}

void printTablaFahr(int lower, int upper, int step) {
	double (* fptr)(double);
	fptr = convertirACelsius;
	printFilas(lower, upper, step, fptr);;
}

void printTablas(int lower, int upper, int step) {
	printTablaCelsius(lower, upper, step);
	printTablaFahr(lower, upper, step);
}


int main(void) {

	const int UPPER = 300;
	const int STEP = 20;
	const int LOWER = 0;
	
	printTablas(LOWER, UPPER, STEP);
	
	return EXIT_SUCCESS;
}
