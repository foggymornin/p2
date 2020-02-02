/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 22:16:11 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/24 00:07:04 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_puint(unsigned int n)
{
    int w;
    int zero;
    char *s;
    
    if (n == 0 && f.p == 0)
        return (ft_handle_zero_i());
    s = ft_itoa_u(n);
    w = 0;
    f.type = 'i';
    if (f.p <= ft_strlen(s))
        w = f.width - ft_strlen(s);
    else
        w  = f.width - f.p;
    zero = f.p - ft_strlen(s);
    while (w-- > 0)
    {
        if (f.z == '0')
            ft_putchar('0');
        else 
            ft_putchar(' ');
    }
    while(zero-- > 0)
      ft_putchar('0');
    ft_putstr(s);
   // free(s);
    return (0);
}