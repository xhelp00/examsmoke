#include <unistd.h>

void capilatizer (char *s)
{
	int i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -=32;
		write(1, &s[i], 1);
		i++;
	}
	else if (s[i] >= 'A' && s[i] <= 'Z')
	{
		write(1, &s[i], 1);
		i++;
	}
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		//if the previous char was whitespace make it upper again XD
		if ((s[i] >= 'a' && s[i] <= 'z') && s[i - 1] == ' ' || s[i -1] == '\t')
			s[i] -= 32;
		write (1, &s[i], 1);
		i++;
	}
}

int main (int ac, char *av[])
{
	if (ac < 2)
		write (1, "\n", 1);
	int i = 1;
	while (i < ac)
	{
		capilatizer(av[i]);
		write (1, "\n", 1);
		i++;
	}

}