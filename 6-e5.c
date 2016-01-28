// Programa para revertir los digitos de un numero

#include <stdio.h>

int main(void)
{
	int numero, digito_derecho, negativo = 0;

	printf("Introduce tu numero.\n");
	scanf("%i", &numero);

	do
	{
		if(numero < 0)
		{
			numero = -numero;
			negativo = 1; 
		}

		digito_derecho = numero % 10;
		printf("%i", digito_derecho);
		numero = numero / 10;
	}
	while(numero != 0);

	if(negativo == 1)
		printf("-");
	printf("\n");

	return 0;
}
