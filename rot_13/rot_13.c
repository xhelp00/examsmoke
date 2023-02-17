/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:19:48 by phelebra          #+#    #+#             */
/*   Updated: 2023/02/14 14:26:58 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	*argv[])
{
	if (argc == 2)
	{
		
		int	i;

		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] -= 13;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] -= 13;
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
