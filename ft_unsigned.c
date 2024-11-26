/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:22:46 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/26 14:22:26 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	i;

	if (n == 2147483648)
		return (write (1, "2147483648", 10), 10);
	i = 0;
	if (n > 9)
		i += ft_putnbr(n / 10);
	if (n <= 9)
		i = i + ft_putchar(n + '0');
	else
		i = i + ft_putchar(n % 10 + '0');
	return (i);
}
