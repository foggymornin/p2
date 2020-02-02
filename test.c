/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:02:15 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/26 14:52:47 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		print(int n, ...)
{
	int		i;
	int		x;
	va_list ar;

	x = 1;
	va_start(ar, n);

		i = va_arg(ar, int);
		printf("%d : %d\n",x, i);
		x++;
}

int		main()
{
	print(6, 1, 2, 3, 4, 5);
	print(6, 1, 2, 3, 4, 5);
		print(6, 1, 2, 3, 4, 5);

	return 0;
}
