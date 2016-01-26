// Programa para catalogar un caracter ingresado en la terminal

#include <stdio.h>

int main(void)
{
	char c;

	printf("Ingrese un solo caracter: ");
	scanf("%c", &c);

	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("Es un caracter alfabetico.\n");
	}
	else if(c >= '0' && c <= '9')
	{
		printf("Es un caracter numerico.\n");
	}
	else
	{
		printf("Es un caracter especial.\n");
	}

	return 0;
}
