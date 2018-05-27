#include "conversion.h"

double convertirACelsius(double fahr)
{
	return (5.0/9.0) * (fahr-32);
}

double convertirAFahr(double celsius)
{
	return (9.0/5.0) * celsius + 32;
}
