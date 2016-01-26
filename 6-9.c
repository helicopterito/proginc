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

	switch(operador)
	{
		case '+':
			printf("%.2f\n", valor1 + valor2);
		break;

		case '-':
			printf("%.2f\n", valor1 - valor2);
		break;

		case '*':
			printf("%.2f\n", valor1 * valor2);
		break;

		case '/':
			if(valor2 == 0)
			{
				printf("Division por 0\n");
			}
			else
			{
				printf("%.2f\n", valor1 / valor2);
			}
		break;

		default:
			printf("Operador desconocido.\n");
	}

	return 0;
}
