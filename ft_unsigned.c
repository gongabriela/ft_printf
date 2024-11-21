/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:22:46 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/21 16:26:07 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	count_size(unsigned int n)
{
	int		i;
	char	str[12];
	int	j;

	i = 0;
	j = 0;
	if (n == 2147483648)
		return (11);
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

int ft_unsigned(unsigned int n)
{
    int i;
    int result;
    char str[12];
    
    //n = (unsigned int)n;
    result = count_size(n);
    i = 0;
    if (n == 2147483648)
        write(1, "2147483648", 11);
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