
#include "libftprintf.h"

int ft_hex(unsigned int n)
{
    char str[10];
    int i;
    unsigned int hex;

    i = 0;
    while(n != 0)
    {
        hex = n % 16;
        n = n / 16;
        if (0 <= hex && hex <= 9)
            str[i] = hex + 48;
        else
            str[i] = hex + 55;
        i++;
    }
    str[i] = 'x';
    i++;
    str[i] = '0';
    hex = i;
    while (0 <= i)
         write(1, &str[i--], 1);
    return (hex);
}