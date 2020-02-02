/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:28:35 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/23 19:37:52 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_pchar(char c)
{
    int w;

    w = f.width - 1;
    while (f.minus != '-' && w-- >0)
        ft_putchar(' ');
    ft_putchar(c);
    while (f.minus == '-' && w-- >0)
        ft_putchar(' ');
    return (0);
}