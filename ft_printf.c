/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:23:19 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/06 17:23:25 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printchar(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_check(char *format, int *i, va_list ap)
{
    int count;

    count = 0;
    *i += 1;
    if (format[*i] == 'c')
        count += ft_printchar(va_arg(ap, int));
    return (count);
}

int ft_printf(const char *format, ...)
{
    int i;
    int count;
    va_list ap;

    count = 0;
    i = -1;
    va_start(ap,format);
    while(format[++i])
    {
        if (format[i] == '%')
            count += ft_check((char *)format, &i, ap);
        else
            count += write(1, &format[i], 1);
    }
    va_end(ap);
    return (count);
}
