
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i;
	int size;
	int	*res;

	i = 0;
	size = (end - start) + 1;
	res = (int*) malloc(sizeof(int) * size);
	if (!res)
		return (NULL);

	while (i < size)
	{
		res[i] = start + i;
		i++;
	}
	return (res);
}