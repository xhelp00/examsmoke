#include <stdio.h>
#include <stdlib.h>

int main (int ac, char *av[])
{
	if (ac != 3)
	{
		printf("\n");
		return 0;
	}

	int num1 = atoi(av[1]);
	int num2 = atoi(av[2]);
	
	if (num1 <= 0 || num2 <= 0)
	{
		printf("\n");
		return 0;
	}
	while (num2 != 0)
	{
		int tmp = num2;
		num2 = num1 % num2;
		num1 = tmp;
	}
	printf("%d\n", num1);
	return 0;
}