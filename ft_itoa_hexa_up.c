/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 14:26:03 by mafajat           #+#    #+#             */
/*   Updated: 2019/12/19 21:29:45 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		count(int n)
{
	int i;
	unsigned int u;
	i = 0;
	if (n == 0)
		i++;
		u =(unsigned int) n;
	while (u)
	{
		u = u / 16;
		i++;
	}
	return (i);
}
static void		store(char *s, unsigned int n, int i)
{
	if (n % 16 < 10)
			s[i] = (n % 16) + '0';
		else if (n % 16 == 10)
			s[i] = 'A';
		else if (n % 16 == 11)
			s[i] = 'B';	
		else if (n % 16 == 12)
			s[i] = 'C';
		else if (n % 16 == 13)
			s[i] = 'D';
		else if (n % 16 == 14)
			s[i] = 'E';
		else if (n % 16 == 15)
			s[i] = 'F';
}
char			*ft_itoa_hexa_up(int z)
{
	char		*s;
	int			i;
	int			x;
	long 	int	n;
	unsigned int u;

	n = z;
	x = 0;
	i = count(n);
	if (!(s = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	u = (unsigned int)n;
	s[i] = 0;
	while (--i >= x)
	{
		store(s, u, i);
		u = u / 16;
	}
	return (s);
}