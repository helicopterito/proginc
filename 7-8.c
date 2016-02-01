// Programa para generar numeros de fibonacci usando arreglos
// de longitud variable


#include <stdio.h>

int main(void)
{
	int i, numFib;

	printf("Cuantos numeros deseas entre 1 y 75? ");
	scanf("%i", &numFib);

	if(numFib < 1 || numFib > 75)
	{
		printf("Numero incorrecto.");
		return 1;
	}

	unsigned long long int fibonacci[numFib];

	fibonacci[0] = 0; // por definicion
	fibonacci[1] = 1;

	for(i = 2; i < numFib; i++)
	{
		fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
	}

	for(i = 0; i < numFib; i++)
	{
		printf("%llu ", fibonacci[i]);
	}

	printf("\n");

	return 0;
}
