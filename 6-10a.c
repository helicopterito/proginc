// Programa para generar una tabla de numeros primos

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p, d;
	bool esPrimo;

	for(p = 2; p <= 50; p++)
	{
		esPrimo = true;

		for(d = 2; d < p; d++)
		{
			if(p % d == 0)
			{
				esPrimo = false;
			}
		}
		if(esPrimo != false)
		{
			printf("%i ", p);
		}
	}

	printf("\n");

	return 0;
}
