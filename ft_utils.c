/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:59:47 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/11 20:22:45 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadr(unsigned long int n)
{
	int		i;
	int		total;
	char	*base;
	char	result[16];

	i = 0;
	base = "0123456789abcdef";
	if (n == 0)
		return (write(1, "0x0", 3));
	while (n > 0)
	{
		result[i++] = base[n % 16];
		n /= 16;
	}
	total = ft_printstr("0x");
	while (--i >= 0)
		total += write(1, &result[i], 1);
	return (total);
}
