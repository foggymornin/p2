/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:16:03 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/27 20:31:34 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_flags
{
    int width;
    int p;
    char z;
    char r;
    char type;
    char minus;
    int  length;
    int  i;
    int point;
}               t_flags;

t_flags f;
int		ft_printf(const char *s, ...);
int		ft_strlen(const char *s);
int		ft_atoi(const char *str);
int     ft_pstring(char *str);
void	ft_putchar(char c);
char    ft_checkf(const char *str);
void	ft_putstr(char *str);
int     ft_pint(int n);
int     ft_pint_minus(int n);
char	*ft_itoa(int z);
int	    ft_skip_flags(const char *s, int i);
void	ft_conv(va_list ar, const char *s);
void	storeflags(va_list ar, const char *s);
void    ft_reinitialize(void);
char			*ft_itoa_hexa_up(int z);
char			*ft_itoa_hexa(size_t z, int min);
int    ft_handle_zero_i(void);
int     ft_ppointer(size_t n);
int     ft_pchar(char c);
int     ft_puint(unsigned int n);
char			*ft_itoa_u(unsigned int z);
void    ft_calculate_flags_int(char *s, int *w, int* zero);
void    ft_print_zero_int(char **s,int *w, int *zero);
#endif