/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:06:36 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/19 18:09:48 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_pstring(char *str)
{
    int n;

    if (str == NULL)
        str = "(null)";
    if (f.p < 0 || f.p >= ft_strlen(str))   
        n = f.width - ft_strlen(str);
    else
        n = f.width - f.p;
    while (f.minus != '-' && n-- > 0)
        ft_putchar(' ');
    ft_putstr(str);
    while (f.minus == '-' && n-- > 0)
        ft_putchar(' '); 
    return (0);
}