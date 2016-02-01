// Programa para convertir un numero positivo a otra base

#include <stdio.h>

int main(void)
{
	const char digitos[16] = {'0', '1', '2', '3', '4', '5', '6', 
	'7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int numeroConvertido[64], siguienteDigito, base, indice = 0;
	long int numeroAConvertir;

	//Obtener el numero y la base

	printf("Numero a convertir: ");
	scanf("%ld", &numeroAConvertir);
	printf("Base: ");
	scanf("%i", &base);

	//Convertir el numero

	do
	{
		numeroConvertido[indice] = numeroAConvertir % base;
		indice++;
		numeroAConvertir /= base;
	}
	while(numeroAConvertir != 0);

	//Desplegar el numero en orden inverso
	printf("Numero Convertido: ");

	for(indice--; indice >= 0; indice--)
	{
		siguienteDigito = numeroConvertido[indice];
		printf("%c", digitos[siguienteDigito]);
	}

	printf("\n");

	return 0;
}
