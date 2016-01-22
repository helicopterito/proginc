// Programa para revertir los digitos de un numero

#include <stdio.h>

int main(void)
{
	int numero, digito_derecho;

	printf("Introduce tu numero.\n");
	scanf("%i", &numero);

	while(numero != 0)
	{
		digito_derecho = numero % 10;
		printf("%i", digito_derecho);
		numero = numero / 10;
	}
	printf("\n");

	return 0;
}
