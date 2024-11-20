/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:17:44 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/20 15:25:39 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	count_size(int n)
{
	int		i;
	char	str[12];
	int	j;

	i = 0;
	j = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		j++;
	}
	while (n > 9)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	if (n <= 9)
		str[i] = n + '0';
	if (i == 0)
		return (j = j + 1);
	return (j = j + i);
}

int	ft_putnbr(int n)
{
	int		i;
	char	str[12];
	int	result;

	result = count_size(n);
	i = 0;
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	if (n < 0)
	{
		n = -n;
		write (1, "-", 1);
	}
	while (n > 9)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	if (n <= 9)
		str[i] = n + '0';
	while (i >= 0)
		write(1, &str[i--], 1);
	return (result);
}
