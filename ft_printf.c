/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:19:50 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/25 16:54:58 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_convert(const char *format, va_list args)
{
    if (*format == 'c')
        return (ft_putchar(va_arg(args, int))); 
    else if (*format == 's')
        return (ft_putstr(va_arg(args, char *)));
    else if (*format == 'd' || *format == 'i')
        return (ft_putnbr(va_arg(args, int)));
    else if (*format == '%') //voltar a por o putpercent aqui
        return (ft_putpercent());
    else if (*format == 'u')
        return (ft_unsigned(va_arg(args, unsigned int)));
    /*else if (*format == 'p')
        return (ft_pointer(va_arg(args, void *))); */
    else if (*format == 'x')
        return (ft_hex(va_arg(args, unsigned int))); 
    else if (*format == 'X')
        return (ft_hex_uppercase(va_arg(args, unsigned int)));
    return (0);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result;

    result = 0;
    while(*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            result += ft_convert(format, args);
        }
        else
            result += write(1, &(*format), 1);
        format++;
    }   
    return (result); 
}