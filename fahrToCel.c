#include <stdio.h>

int main(void){
	const int 	LOWER = 0, // lower limit of table
 				UPPER = 300, // upper limit
 				STEP = 20; // step size

 	for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
 	printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32) );

}