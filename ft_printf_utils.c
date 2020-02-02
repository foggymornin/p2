/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:18:24 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/24 16 :51:40 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	f.length++;
}

void	ft_putstr(char *str)
{
	while (*str && (f.p-- || f.type == 'i')) 
	{
		ft_putchar(*str);
		str++;
	}
}
int		ft_skip_flags(const char *s, int i)
{
	while ((s[i] == '.' || s[i] == '*' || s[i] == '-' || s[i] == '0' || s[i] == '%') || (s[i] >= '0' && s[i] <= '9'))
		i++;
	//while (s[i] != '%' || s[i] != 0)
		//i++;
	return (i);	
}
void	ft_conv(va_list ar, const char *s)
{
	int i;

	i = 0;
	if (s[i] == 's')
		ft_pstring(va_arg(ar, char *));
	if (s[i] == 'c')
		ft_pchar(va_arg(ar, int));
	if (s[i] == 'p')
		ft_ppointer(va_arg(ar, size_t));
	else if (s[i] == 'd')
		ft_pint(va_arg(ar, int));
	if (s[i] == 'u')
		ft_puint(va_arg(ar, unsigned int));
}
void	storeflags(va_list ar, const char *s)
{
	s++;
	if (*s == '-')
	{
		f.minus = '-';
		s++;
	}
	if (*s == '0')
	{
		f.z = '0';
		s++;
	}
	if (*s >= '0' && *s <= '9')
		f.width = ft_atoi(s);
	else if (*s == '*')
	{
		f.width = va_arg(ar, int);
		if (f.width < 0)
		{
			f.width = -1 * f.width;
			f.minus = '-';
		}
	}
	while ((*s >= '0' && *s <= '9') || *s == '*')
		s++;
	if (*s == '.')
	{
		f.point = 1;
		s++;
		if (*s == '*')
			f.p = va_arg(ar, int);
		else
			f.p = ft_atoi(s);
	}
}