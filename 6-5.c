// Programa que determina si un anio es bisiesto o no.

#include <stdio.h>

int main(void)
{
	int anio, res_4, res_100, res_400;

	printf("Introduzca el anio que desea evaluar.: ");
	scanf("%i", &anio);

	res_4 = anio % 4;
	res_100 = anio % 100;
	res_400 = anio % 400;

	if(res_4 == 0 && res_100 != 0 || res_400 == 0)
	{
		printf("Es un anio bisiesto\n");
	}
	else
	{
		printf("No, no es un anio bisiesto\n");
	}

	return 0;
}
