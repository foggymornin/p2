/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:49:26 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/27 20:34:00 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{

	int		i;
	va_list	ar;
	i = 0;
	va_start(ar, s);
	while (s[i])
	{
		ft_reinitialize();
		while (s[i] != '%' && s[i])
			ft_putchar(s[i++]);
		if (s[i] == 0)
				break;
		storeflags(ar, s + i);
		i = ft_skip_flags(s, i);
		ft_conv(ar, s + i);
		i++;
	}
	//printf("\n%d", f.length);
	return (f.length);
}
 int main()
{
  //	char s[] = "hello";
	  int n = 5;

 	printf("%02d", -55, 0, -1);
	
		//ft_printf("%-5.0d",8);

}