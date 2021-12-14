/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 04:18:36 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/14 01:38:20 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrunsigned(unsigned int num, int base, int *len, char *str)
{
	if (num < (unsigned int)base)
		ft_putchar(str[num], len);
	else
	{
		ft_putnbrunsigned((num / base), base, len, str);
		ft_putnbrunsigned((num % base), base, len, str);
	}
}
