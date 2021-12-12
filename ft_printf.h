/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:45:57 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/11 20:10:45 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_check(char format, va_list ap);
int	ft_printadr(unsigned long int ap);
int	ft_printnum(int ap);
int	ft_printu(unsigned int ap);
int	ft_printhex(unsigned int ap, int f);

#endif
