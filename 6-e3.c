#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Introduzca el primer numero: ");
	scanf("%i", &num1);
	printf("Introduzca el segundo numero: ");
	scanf("%i", &num2);

	num2 != 0 ? printf("%i / %i = %.3f\n", num1, num2, (float) num1 / num2) : printf("No es divisible\n");

	return 0;

}

