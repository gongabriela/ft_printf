/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:04:12 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/26 15:55:02 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexp(unsigned long long n, char *base)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_hexp(n / 16, base);
	i += write(1, &base[n % 16], 1);
	return (i);
}

int	ft_pointer(void *p)
{
	if (p == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + ft_hexp((unsigned long long)p, "0123456789abcdef"));
}
