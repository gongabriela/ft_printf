/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:17:44 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/26 15:43:51 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;
	int	nbr;

	if (n == -2147483648)
		return (write (1, "-2147483648", 11), 11);
	if (n < 0)
	{
		nbr = -n;
		write (1, "-", 1);
	}
	else
		nbr = n;
	i = 0;
	if (nbr > 9)
		i += ft_putnbr(nbr / 10);
	if (nbr <= 9)
		i = i + ft_putchar(nbr + '0');
	else
		i = i + ft_putchar(nbr % 10 + '0');
	if (nbr == -n && n < 0)
		return (i + 1);
	return (i);
}
