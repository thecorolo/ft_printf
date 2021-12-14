/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:05:02 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/14 02:46:48 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    convertstreit(const char *s, va_list *streit, int *len, int i)
{
    if (s[i] == 'c')
	    ft_putchar(va_arg(*streit, int), len);
    else if (s[i] == 's')
        ft_putstr(va_arg(*streit, char *), len);
    else if (s[i] == 'd' || s[i] == 'i')
        ft_putnbr(va_arg(*streit, long), len);
    else if (s[i] == 'u')
        ft_putnbrunsigned(va_arg(*streit, unsigned int), 10, len, "0123456789");
    else if (s[i] == 'x')
        ft_putnbr_base(va_arg(*streit, unsigned long), 16, len, "0123456789abcdef");
    else if (s[i] == 'X')
        ft_putnbr_base(va_arg(*streit, unsigned long), 16, len, "0123456789ABCDEF");
    else if (s[i] == '%')
        ft_putchar('%', len);
    else if (s[i] == 'p')
    {
        ft_putstr("0x", len);
        ft_putnbr_base(va_arg(*streit, unsigned long), 16, len, "0123456789abcdef");
    }
    else
        ft_putchar(s[i], len);
}

int	ft_printf(const char *s, ...)
{
    int     i;
    int     len;
    va_list streit;
    
    va_start(streit, s);
    i = 0;
    len = 0;
    while(s[i])
    {
        if(s[i] == '%')
        {
            i++;
            convertstreit(s, &streit, &len, i);
        }
        else
            ft_putchar(s[i], &len);
        i++;
    }
    return (len);
}

 /*int main()
{
    char zbi = 0;
    printf("printed: %d\n", ft_printf("%u %x %X %d %s %p %%%%%% %i %c\n", -10, 16, 128, 14, NULL, &zbi, 154564, 'o'));
    printf("printed: %d", printf("%u %x %X %d %s %p %%%%%% %i %c\n", -10, 16, 128, 14, NULL, &zbi, 154564, 'o'));
}*/
    