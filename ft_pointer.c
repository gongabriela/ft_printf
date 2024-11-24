/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:04:12 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/22 22:55:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_pointer(void *p) //pode receber outros tipos de pointer, consertar isso
{
    if (p == NULL)
        return (write(1, "(nil)", 5));
    return (ft_hex(&p));
}