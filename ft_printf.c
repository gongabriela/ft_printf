/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <ggoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:19:50 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/11/18 18:49:38 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libftprintf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

static int  ft_convert(const char *format, int i, va_list args)
{
    if (format[i + 1] == 'c')
        return(ft_putchar_fd((char)va_arg(args, int), 1));
    /*else if (format[i + 1] == 's')
        j = ft_putstr_fd((char *)args, 1);
    else if (format[i + 1] == 'p')
        j = 
    else if (format[i + 1] == 'd')
        j = ft_putnbr_fd(args, 1);
    else if (format[i + 1] == 'i')
        j = 
    else if (format[i + 1] == 'u')
        j = 
    else if (format[i + 1] == 'x')
        j = 
    else if (format[i + 1] == 'X')
        j = 
    else if (format[i + 1] == '%')
    {
        write(1, "%", 1);
        j++;
    }*/
    return (0);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int i;
    int result;

    i = 0;
    result = 0;
    while(format[i] != '\0')
        if (format[i] == '%')
            result = result + ft_convert(format, i, args);
        else
            write(1, &format[i++], 1);
    return (result + i); //falta tirar os chars da conversao %s %d etc e cuidado com o %%
}

/*int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int i; //qtd de chars do format q ele ta printando
    int j; //qtd de chars do arg que ele ta printando

    i = 0;
    while (format[i] != '\0')
    {
        while (format[i] != '%')
            write (1, &format[i++], 1);
        if (format[i] == '%')
        {
            if (format[i + 1] == 'c')
            {
                int c = va_arg(args, int);
                char chr = c;
                j = 0;
                write(1, &chr, 1);
                j++;
            }
        }
        i = i + 2;
    }
    va_end(args); 
    return (j + i - 2); //-2 p tirar o %c da conta
}*/

int main(void)
{
    char c = 'g';
    int ret = ft_printf("meu nome comeca com a letra %c", c);
    printf("\n%d", ret);
    return (0);
}