/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:04:12 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/25 15:21:59 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_pointer(void *p) //pode receber outros tipos de pointer, consertar isso
{
    if (p == NULL)
        return (write(1, "(nil)", 5));
    return (ft_hex(&p));
}