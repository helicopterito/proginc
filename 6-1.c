// Programa para calcular el valor absoluto de un nunmero

#include <stdio.h>

int main(void)
{
	int numero;

	printf("Escribe tu numero: ");
	scanf("%i", &numero);

	if(numero < 0)
	{
		numero = -numero;
	}

	printf("El valor absoluto es %i\n", numero);

	return 0;
}
