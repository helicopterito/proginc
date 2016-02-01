#include <stdio.h>

int main(void)
{
	char palabra[] = {'H', 'o', 'l', 'a', '!'};
	int i;

	for(i = 0; i < 5; i++)
	{
		printf("%c", palabra[i]);
	}

	printf("\n");

	return 0;
}

