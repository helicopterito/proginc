//Programa para generar los primeros 15 numeros de fibonacci
#include <stdio.h>

int main(void)
{
	int fibonacci[15], i;

	fibonacci[0] = 0; // por definicion
	fibonacci[1] = 1; //ibidem

	for(i = 2; i < 15; i++)
	{
		fibonacci[i] = fibonacci[i-2] + fibonacci[i -1];
	}

	for(i = 0; i < 15; i++)
	{
		printf("%i\n", fibonacci[i]);
	}

	return 0;
}
