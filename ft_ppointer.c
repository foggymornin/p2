/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:04:57 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/22 21:41:34 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_ppointer(size_t n)
{
    char     *s;
    int     w;
    
    s = ft_itoa_hexa(n, 1);
    w = f.width - ft_strlen(s) - 2;
    while (f.minus != '-' && w-- > 0)
        ft_putchar(' ');
    ft_putchar('0');
    ft_putchar('x');
    ft_putstr(s);
    while (f.minus == '-' && w-- > 0)
        ft_putchar(' ');
    return (0);
}