/* Programa para calcualar el 200vo numero triangular
 Introduccion al for */

#include <stdio.h>

int main(void)
{
	int n, numeroTriangular;

	numeroTriangular = 0;

	for(n = 1; n <= 200; n++)
	{
		numeroTriangular += n;
	}
	printf("El 200vo numero triangular es %i\n", numeroTriangular);

	return 0;
}
