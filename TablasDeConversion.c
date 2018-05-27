#include "Conversion.h"

int main(void){

	const int UPPER = 300;
	const int STEP = 20;
	const int LOWER = 0;
 	
	for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
 		printf("%3d %6.1f\n", fahr, convertirACelsius(fahr));

	for(int cels = LOWER; cels <= UPPER; cels = cels + STEP)
 		printf("%3d %6.1f\n", cels, convertirAFahr(cels));

	return EXIT_SUCCESS;

}