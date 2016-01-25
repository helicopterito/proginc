// Programa parta determinar si un numero es par o non.

#include <stdio.h>

int main(void)
{
	int numero_A_Probar, residuo;

	printf("Ingrese el numero a verificar.: ");
	scanf("%i", &numero_A_Probar);

	residuo = numero_A_Probar % 2;

	if(residuo == 0)
	{
		printf("El numero es par\n");
	}
	else
	{
		printf("El numero es impar\n");
	}

	return 0;
}
