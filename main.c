/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:23:24 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/12 17:30:18 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>

int	main()
{
	int q;	
	//printf("%p %p\n", q, 123);
	ft_printf("%p %x %X %%\n", 123, q, 123);
	ft_printf("%c %s\n", 'a', "bcd");
	ft_printf("%u %u %%\n", 123, -10);
	ft_printf("%d %i %d %i\n", -1, 1, 10, -10);
	return(0);
}
