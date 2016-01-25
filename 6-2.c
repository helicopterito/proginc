/* Programa para calcular el promedio de un conjunto de
	calificaciones y contar el numero de reprobados.
*/

#include <stdio.h>

int main(void)
{
	int numeroDeCalificaciones, i, calificacion;
	int calTotal = 0, numeroReprobados = 0;
	float promedio;

	printf("Cuantas calificaciones desea ingresar? ");
	scanf("%i", &numeroDeCalificaciones);

	for(i = 1; i <= numeroDeCalificaciones; i++)
	{
		printf("Introduzca la calificacion #%i ", i);
		scanf("%i", &calificacion);

		calTotal += calificacion;

		if(calificacion < 65)
		{
			numeroReprobados++;
		}
	}

	promedio = (float) calTotal / numeroDeCalificaciones;
	printf("\nCalificacion promedio = %.2f\n", promedio);
	printf("Numero de reprobados = %i\n", numeroReprobados);

	return 0;
}
