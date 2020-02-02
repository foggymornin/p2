/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 20:55:36 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/27 20:31:29 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_reinitialize(void)
{
    f.width = -1;
    f.p = -1;
    f.r = '0';
    f.type = '0';
    f.z = ' ';
    f.point = 0;
    //f.length = 0;
}

void    ft_calculate_flags_int(char *s, int *w, int* zero)
{
    if (f.p <= ft_strlen(s))
        *w = f.width - ft_strlen(s);
    else
        *w  = f.width - f.p;
    *zero = f.p - ft_strlen(s);
}
void    ft_print_zero_int(char **s,int *w, int *zero)
{
    if (**s == '-' && (*zero)++ > 0)
            ft_putchar(*(*s)++);
            while((*zero)-- > 0)
            ft_putchar('0');
        ft_putstr(*s);
}