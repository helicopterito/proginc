#include <stdio.h>
#include <stdbool.h>

//Programa modificado para generar numeros primos

int main(void)
{
	int p, i, primos[50], indice = 2;
	bool esPrimo;

	primos[0] = 2;
	primos[1] = 3;


	for(p = 5; p <= 50; p += 2)
	{
		esPrimo = true;

		for(i = 1; esPrimo && p / primos[i] >= primos[i]; i++)
		{
			if(p % primos[i] == 0)
			{
				esPrimo = false;
			}
		}

		if(esPrimo == true)
		{
			primos[indice] = p;
			indice++;
		}
	}

	for(i = 0; i < indice; i++)
	{
		printf("%i ", primos[i]);
	}

	printf("\n");

	return 0;
}
