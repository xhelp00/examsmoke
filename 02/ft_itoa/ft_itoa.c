/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:27:18 by phelebra          #+#    #+#             */
/*   Updated: 2023/02/14 11:59:54 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	size(int n)
{
	int	len;

	len = 0;
	if (n<=0)
		len++;
	while(n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*ptr;
	int	len;
	long int	m;

	len = size(nbr);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	m = nbr;
	if (m < 0)
		{
			m *= -1;
			ptr[0] = '-';
		}
	ptr[len] = '\0';
	len--;
	if (m == 0)
		ptr[0] = '0';
	while (m)
	{
		ptr[len] = m % 10 + '0';
		m /= 10;
		len--;
	}
	return (ptr);
}