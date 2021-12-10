/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:45:57 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/06 17:46:00 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
//# include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_printchar(int c);
int ft_check(char *format, int *i, va_list ap);

#endif
