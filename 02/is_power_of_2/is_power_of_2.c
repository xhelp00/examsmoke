#include <stdio.h>
int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else if (n / 2 == 1)
		return (1);
	else if (n % 2 == 0)
	{
		//printf("%d\n", n);
		is_power_of_2 (n / 2);
		
	}
	else if (n == 1)
		return (1);
	else 
		return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 1)
        return(0);
    printf("is_power_of_2(\"%s\") = %d\n", argv[1], is_power_of_2(atoi(argv[1])));
    return(0);
}
*/