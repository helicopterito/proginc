#include <stdio.h>

int main(void)
{
	int n, numero, numeroTriangular;

	printf("Que numero triangular quieres: ");
	scanf("%i", &numero);

	numeroTriangular = 0;

	for(n = 1; n <= numero; n++)
	{
		numeroTriangular += n;
	}

	printf("Numero triangular %i es %i\n", numero, numeroTriangular);

	return 0;
}
