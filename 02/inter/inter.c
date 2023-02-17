/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:37:39 by phelebra          #+#    #+#             */
/*   Updated: 2022/11/02 18:09:13 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int check_double(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i<pos)
	{
		if (str[i] == c)
			return (0);
	i++;
	}
	return (1);
}

void	ft_inter(char *str, char *str1)
{
	int i;
	int j;

	i = 0;
	
	while (str[i] != '\0')
	{
		if (check_double(str, str[i], i)==1)
		{
			j = 0;
			while (str1[j] != '\0')
			{
				if (str[i] == str1[j])
				{
					write (1, &str[i], 1);
					break;
				}
			j++;
			}
		}
	i++;
	}
}

int main (int ac, char **av)
{
if (ac == 3)
{
ft_inter(av[1], av[2]);
}
write (1, "\n", 1);
return(0);	
}
