#include <stdio.h>

int main(void)
{
	int numero, temp = 0, suma = 0;

	printf("Introduzca el numero: ");
	scanf("%i", &numero);

	printf("La suma de %i ", numero);
	while(numero != 0)
	{
		temp = numero % 10;
		suma += temp;
		numero /= 10;
	}

	printf("es %i\n", suma);

	return 0;
}
