/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 02:59:57 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/14 01:38:03 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long num, int base, int *len, char *str)
{
	if (num < 0)
		ft_putchar('-', len);
	if (num < (unsigned long)base)
		ft_putchar(str[num], len);
	else
	{
		ft_putnbr_base((num / base), base, len, str);
		ft_putnbr_base((num % base), base, len, str);
	}
}
