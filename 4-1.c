#include <stdio.h>

int main(void)
{
	int varEntero = 100;
	float varFlotante = 331.79;
	double varDoble = 8.44e+11;
	char varCar = 'W';
	_Bool boolVar = 0;

	printf("varEntero = %i\n", varEntero);
	printf("varFlotante = %f\n", varFlotante);
	printf("varDoble = %e\n", varDoble);
	printf("varDoble = %g\n", varDoble);
	printf("varCar = %c\n", varCar);
	printf("boolVar = %i\n", boolVar);

	return 0;
}
