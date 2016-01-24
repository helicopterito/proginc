#include <stdio.h>

int main(void)
{
	int n, numeroTriangular;

	printf("n	Numero Triangular\n\n");

	for(n = 5; n <= 50; n+=5)
	{
		numeroTriangular = (n * (n + 1))/2;
		printf("%i	%i\n", n, numeroTriangular);
	}

	return 0;
}
