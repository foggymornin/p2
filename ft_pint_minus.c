/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint_minus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:40:40 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/24 21:16:23 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_pint_minus(int n)
{
    int w;
    int zero;
    char *s;

    if (n == 0 && f.p == 0)
        return (ft_handle_zero_i());
    s = ft_itoa(n);
    w = 0;
    f.type = 'i';
    if (f.p <= ft_strlen(s))
        w = f.width - ft_strlen(s);
    else
        w  = f.width - f.p;
    zero = f.p - ft_strlen(s);
    while(zero-- > 0)
      ft_putchar('0');
    ft_putstr(s);
    while (w-- > 0)
    {
        if (f.z == '0')
            ft_putchar('0');
        else 
            ft_putchar(' ');
    }
    return (0);
}