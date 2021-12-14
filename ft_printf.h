/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 00:37:44 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/14 01:35:16 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *len);
void	ft_putnbr_base(unsigned long num, int base, int *len, char *str);
void	ft_putstr(const char *str, int *len);
void	ft_putchar(char c, int *len);
void	ft_putnbrunsigned(unsigned int num, int i, int *len, char *str);
int		ft_printf(const char *s, ...);
void	ft_putnbr(long num, int *len);

#endif