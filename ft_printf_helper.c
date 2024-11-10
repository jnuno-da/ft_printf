/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:02:09 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/11/10 12:09:13 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puts(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(fd,"(null)",6);
		return(6);
	}
	while (str[i] != '\0')
	{
		ft_putchar_fd (str[i], fd);
		i++;
	}
	return(i);
}