/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:22:46 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/25 16:23:36 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_size(unsigned int n)
{
	int	j;

	j = 0;
	if (n == 2147483648)
		return (10);
	while (n > 9)
	{
		n = n / 10;
		j++;
	}
	if (n <= 9)
		j++;
	return (j);
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
        return (write(1, "2147483648", 10), result);
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