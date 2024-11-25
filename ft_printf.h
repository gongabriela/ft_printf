/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:17:44 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/25 16:55:23 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int ft_putpercent(void);
int ft_unsigned(unsigned int n);
int ft_hex(unsigned int n);
int ft_hex_uppercase(unsigned int n);

#endif