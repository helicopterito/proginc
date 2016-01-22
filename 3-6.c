/*
Este programa suma dos valores enteros
y muestra el resultado
*/
#include <stdio.h>

int main(void)
{
	//Declarar variabgles
	int valor1, valor2, suma;

	//Asignar valores y calcular la suma
	valor1 = 50;
	valor2 = 25;
	suma = valor1 + valor2;

	//Mostrar el resultado
	printf("La suma de %i y %i es %i\n", valor1, valor2, suma);
}
