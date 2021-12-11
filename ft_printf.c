/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:23:19 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/11 20:20:32 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (*str)
	{
		write(1, str++, 1);
		len++;
	}
	return (len);
}

int	ft_check(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_printchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_printstr(va_arg(ap, char *));
	if (format == 'p')
		count += ft_printadr(va_arg(ap, unsigned long int));
	if (format == 'd' || format == 'i')
		count += ft_printnum(va_arg(ap, int));
	if (format == 'u')
		count += ft_printu(va_arg(ap, unsigned int));
	if (format == 'x')
		count += ft_printhex(va_arg(ap, unsigned int));
	if (format == 'X')
		count += ft_printhexu(va_arg(ap, unsigned int));
	/*if (*format == '%')
	        count += write(1, "%", 1);*/
	else
		count = 0;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
			write(1, format++, 1);
		else if (*(format + 1) == '%')
		{
			write(1, format + 1, 1);
			format += 2;
		}
		else if (*(format + 1) == '\0')
			write(1, ++format, 1);
		else
		{
			count += ft_check(*(format + 1), ap) - 1;
			format += 2;
		}
		count++;
	}
	va_end(ap);
	return (count);
}
