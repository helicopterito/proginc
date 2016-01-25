// Programa para implementar la funcion de signo

#include <stdio.h>

int main(void)
{
	int numero, signo;

	printf("Ingrese un numero: ");
	scanf("%i", &numero);

	if(numero < 0)
	{
		signo = -1;
	}
	else if(numero == 0)
	{
		signo = 0;
	}
	else
	{
		signo = 1;
	}

	printf("Signo = %i\n", signo);

	return 0;
}
