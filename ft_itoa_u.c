/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 00:04:21 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/24 00:06:19 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		count(unsigned long n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa_u(unsigned int z)
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
	s[i] = 0;
	while (--i >= x)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}