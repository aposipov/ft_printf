/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:59:47 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/12 16:52:19 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadr(unsigned long int ap)
{
	int	count;

	count = 0;
	if (ap >= 16)
	{
		count += ft_printadr(ap / 16);
		count += ft_printadr(ap % 16);
	}
	if (ap < 16)
	{
		if (ap < 10)
			count += ft_printchar(ap + '0');
		else
			count += ft_printchar(ap + 'W');
	}
	return (count);
}

int	ft_printnum(int ap)
{
	int	count;

	count = 0;
	if (ap == -2147483648)
		return (ft_printstr("-2147483648"));
	if (ap < 0)
	{
		ap = -ap;
		count = ft_printchar('-');
	}
	if (ap <= 9)
		count += ft_printchar(ap + '0');
	else
	{
		count += ft_printnum(ap / 10);
		count += ft_printnum(ap % 10);
	}
	return (count);
}

int	ft_printu(unsigned int ap)
{
	int	count;

	count = 0;
	if (ap < 10)
		return (count += ft_printchar(ap + '0'));
	count += ft_printu(ap / 10);
	count += ft_printu((ap % 10));
	return (count);
}

int	ft_printhex(unsigned int ap, int f)
{
	int	count;

	count = 0;
	if (ap >= 16)
	{
		count += ft_printhex(ap / 16, f);
		count += ft_printhex(ap % 16, f);
	}
	if (ap < 16)
	{
		if (ap < 10)
			count += ft_printchar(ap + '0');
		else
		{
			if (f == 1)
				count += ft_printchar(ap + 'W');
			else
				count += ft_printchar(ap + '7');
		}
	}
	return (count);
}
