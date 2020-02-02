/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:04:25 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/27 20:38:49 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_pint(int n)
{
    int w;
    int zero;
    char *s;
    
    if (n == 0 && f.p == 0)
        return (ft_handle_zero_i());
    s = ft_itoa(n);
    w = 0;
    f.type = 'i';
    ft_calculate_flags_int(s, &w, &zero);
        if (*s == '-' && f.z == '0' && f.p == -1)
            ft_putchar(*s++);
    if (f.minus == '-')
        ft_print_zero_int(&s, &w, &zero);
        while (!(*s == '-' && zero > 0 && w == 1) && w-- > 0)
        {
            if (f.z == '0' && f.p < 0 && f.minus != '-')
            {
                if (*s == '-')
                    ft_putchar(*s++);
                ft_putchar('0');
            }
            else 
                ft_putchar(' ');
        }
    if (f.minus != '-')
        ft_print_zero_int(&s, &w, &zero);
   // free(s);
    return (0);
}