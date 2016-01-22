/* Programa para encontrar el mayor
comun divisor de dos numero no negativos
*/

#include <stdio.h>

int main(void)
{
	int u, v, temp;

	printf("Introduce los dos numeros no negativos.\n");
	scanf("%i%i", &u, &v);

	while(v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	printf("Su mayor comun divisor es %i\n", u);

	return 0;
}
