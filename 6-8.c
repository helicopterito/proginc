/* Programa para evaluar un expresion simple de la forma
	numero operador numero
*/

#include <stdio.h>

int main(void)
{
	float valor1, valor2;
	char operador;

	printf("Ingresa tu expresion.\n");
	scanf("%f %c %f", &valor1, &operador, &valor2);

	if(operador == '+')
	{
		printf("%.2f\n", valor1 + valor2);
	}
	else if(operador == '-')
	{
		printf("%.2f\n", valor1 - valor2);
	}
	else if(operador == '*')
	{
		printf("%.2f\n", valor1 * valor2);
	}
	else if(operador == '/')
	{
		printf("%.2f\n", valor1 / valor2);
	}

	return 0;
}
