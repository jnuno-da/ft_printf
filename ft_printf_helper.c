/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:02:09 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/11/15 00:28:17 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putch(char c, int fd)
{
	int	count;

	count = 0;
	write(fd, &c, 1);
	count++;
	return(count);
}

int	ft_puts(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar_fd (str[i], fd);
		i++;
	}
	return (i);
}

int	ft_upnbr(unsigned int n, int fd)
{
	unsigned long	nb;
	unsigned int	count;

	nb = n;
	count = 0;
	if (nb > 9)
	{
		ft_upnbr(nb / 10, fd);
		nb = nb % 10;
		count++;
	}
	ft_putchar_fd(nb + 48, fd);
	return (count + 1);
}

int	ft_pnbr(int n, int fd)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * -1;
		count++;
	}
	if (nb > 9)
	{
		ft_pnbr(nb / 10, fd);
		nb = nb % 10;
		count++;
	}
	ft_putchar_fd(nb + 48, fd);
	count++;
	return (count);
}

int	ft_check_p(unsigned long n)
{
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (ft_base_hex(n, 'x') + 2);
}

int	ft_base_hex(unsigned int n, char format)
{
	unsigned int	count;
	const char		*base;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_base_hex(n / 16, format);
	count += write(1, &base[n % 16], 1);
	return (count);
}
