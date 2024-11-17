/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:20:10 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/11/17 10:42:57 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_puts(char *str, int fd);
int	ft_putch(char c, int fd);
int	ft_pnbr(int n, int fd);
int	ft_base_hex(unsigned long n, char format);
int	ft_check_p(unsigned long n);
int	ft_upnbr(unsigned int n, int fd);

#endif