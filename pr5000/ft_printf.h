/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fquitian <fquitian@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:49:05 by fquitian          #+#    #+#             */
/*   Updated: 2025/03/27 10:57:43 by fquitian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_puthex(unsigned long n, int uppercase);
int		ft_putptr(void *ptr);

#endif
