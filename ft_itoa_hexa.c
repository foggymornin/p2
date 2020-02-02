/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:04:29 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/22 21:35:26 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t		count(size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		n = n / 16;
		i++;
	}
	return (i);
}
static void		store(char *s, size_t n, int i, int min)
{
	const char *hex_min = "0123456789abcdefg";
	const char *hex_max = "0123456789ABCDEF";

	s[i] = (min ? hex_min[n % 16] : hex_max[n % 16]);
}
char			*ft_itoa_hexa(size_t z, int min)
{
	char			*s;
	size_t			i;
	size_t			n;

	n = z;
	i = count(n);
	if (!(s = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = 0;
	while ( i-- > 0)
	{
		store(s, n, i, min);
		n = n / 16;
	}
	return (s);
}
// int		main(void)
// {
// 	int h;
// 	h = 686565;
// 	printf("%s", ft_itoa_hexa(456, 1));

// }