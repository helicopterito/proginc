// Programa para generar una tabla de numeros triangulares.

#include <stdio.h>

int main(void)
{
	int n, numeroTriangular;

	printf("TABLA DE NUMEROS TRIANGULARES\n\n");
	printf("n	Suma de 1 a n\n");
	printf("---	-------------\n");

	numeroTriangular = 0;

	for(n = 1; n <= 10; n++)
	{
		numeroTriangular += n;
		printf(" %i	%i\n", n, numeroTriangular);
	}

	return 0;
}
