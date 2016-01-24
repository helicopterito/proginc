#include <stdio.h>

int main(void)
{
	int dolares, centavos, cuenta;

	for(cuenta = 0; cuenta <= 10; cuenta++)
	{
		printf("Ingrese los dolares: ");
		scanf("%i", &dolares);
		printf("Ingrese los centavos: ");
		scanf("%i", &centavos);
		printf("$%i.%.2i\n\n", dolares, centavos);
	}

	return 0;
}
