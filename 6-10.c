// Programa para generar una tabla de numeros primos

#include <stdio.h>

int main(void)
{
	int p, d;
	_Bool esPrimo;

	for(p = 2; p <= 50; p++)
	{
		esPrimo = 1;

		for(d = 2; d < p; d++)
		{
			if(p % d == 0)
			{
				esPrimo = 0;
			}
		}
		if(esPrimo != 0)
		{
			printf("%i ", p);
		}
	}

	printf("\n");

	return 0;
}
