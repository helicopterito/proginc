#include <stdio.h>

int main()
{
	int valor[10], indice;

	valor[0] = 197;
	valor[2] = -100;
	valor[5] = 350;
	valor[3] = valor[0] + valor[5];
	valor[9] = valor[5] / 10 ;
	valor[2]--;

	for(indice = 0; indice < 10; indice++)
	{
		printf("valor[%i] = %i\n", indice, valor[indice]);
	}

	return 0;

}
