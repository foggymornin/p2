/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:46:45 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/23 23:59:58 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		count(int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int z)
{
	char		*s;
	int			i;
	int			x;
	unsigned long int	n;

	n = z;
	x = 0;
	i = count(n);
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	if (z < 0)
	{
		n = n * -1;
		s[0] = '-';
		x = 1;
	}
	s[i] = 0;
	while (--i >= x)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}
