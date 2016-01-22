// Conversiones en C
#include <stdio.h>

int main(void)
{
	float f1 = 123.125, f2;
	int e1, e2 = -150;
//	char c = 'a';

	e1 = f1; // flotante a entero
	printf("%f asignado a un entero produce %i\n", f1, e1);

	f1 = e2; // entero a flotante
	printf("%i asignado a un flotante produce %f\n", e2, f1);

	f1 = e2 / 100; // entero dividido por entero
	printf("%i dividido por 100 produce %f\n", e2, f1);

	f2 = e2 / 100.0; // entero dividido por flotante
	printf("%i dividido por 100.0 produce %f\n", e2, f2);

	f2 = (float) e2 / 100; //operador typecast
	printf("(float) %i dividido por 100 produce %f\n", e2, f2);

	return 0;
}
