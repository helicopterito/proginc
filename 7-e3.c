#include <stdio.h>


int main(void)
{
	int i, respuesta, contadores[11], contador, total;

	for(i = 1; i <= 10; i++)
	{
		contadores[i] = 0;
	}

	printf("Cuantas respuestas deseas introducir? ");
	scanf("%i", &total);

	printf("Introduce tus respuestas\n");

	for(i = 1; i <= total; i++)
	{
		scanf("%i", &respuesta);

		if(respuesta < 1 || respuesta > 10)
		{
			printf("Respuesta incorrecta: %i\n", respuesta);

		}
		else
		{
			contadores[respuesta]++;
		}
	}

	printf("\n\nCalificacion	Numero de Respuesta\n");
	printf("----- ----------------\n");

	for(i = 1; i <= 10; i++)
	{
		printf("%4i%14i\n", i, contadores[i]);
	}

	return 0;
}
