#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Introduzca el primer numero: ");
	scanf("%i", &num1);
	printf("Introduzca el segundo numero: ");
	scanf("%i", &num2);

	num1 % num2 == 0 ? printf("%i es dividible entre %i\n", num1, num2) : printf("No es divisible\n");

	return 0;

}

