#include <stdio.h>

int main(void)
{
	int acumulado = 1, contador, numero;

	printf("Introduce el numero del factorial: ");
	scanf("%i", &numero);

	for(contador = 1; contador <= numero; contador++)
	{
		acumulado *= contador;
	}

	printf("El factorial de %i es %i\n", numero, acumulado);

	return 0;
}
