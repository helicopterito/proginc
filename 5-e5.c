#include <stdio.h>

int main(void)
{
	int n, dos_a_la_n;

	printf("TABLA DE POTENCIAS DE DOS\n\n");
	printf("n	2 a la n\n");
	printf("---	--------\n");

	dos_a_la_n = 1;

	for(n = 0; n <= 10; n++)
	{
		printf("%2i	%i\n", n, dos_a_la_n);
		dos_a_la_n *= 2;
	}

	return 0;
}
