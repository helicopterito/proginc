#include <stdio.h>

int main(void)
{
	int arreglo[10] = {0, 1, 4, 9, 16}, i;

	for(i = 5; i < 10; i++)
	{
		arreglo[i] = i * i;
	}

	for(i = 0; i < 10; i++)
	{
		printf("arreglo[%i] = %i\n", i, arreglo[i]);
	}

	return 0;
}
