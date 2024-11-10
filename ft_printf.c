/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:06:36 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/11/10 20:33:06 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	p_args(va_list args, char opt)
{
	if (opt == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	if (opt == 's')
		ft_puts(va_arg(args, char *), 1);
	//if (opt == 'p')
	if (opt == 'i')
		ft_pnbr(va_arg(args,int), 1);
	return (0);
}
int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list args;

	va_start (args, format);
	i = 0;
	count = 0;
	while (format[i++])
	{
		if (format[i] != '%')
		{
				ft_putchar_fd(format[i], 1);
				count++;
		}
		else
		{
			i++;
			count += p_args(args, format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}

