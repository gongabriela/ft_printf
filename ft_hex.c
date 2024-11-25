
#include "ft_printf.h"

int ft_hex(unsigned int n)
{
    char str[10];
    int i;
    unsigned int hex;

    i = 0;
    if (n == 0)
        return(write(1, "0", 1), 1);
    while(n != 0)
    {
        hex = n % 16;
        n = n / 16;
        if (0 <= hex && hex <= 9)
            str[i] = hex + 48;
        else
            str[i] = hex + 87;
        i++;
    }
    hex = i;
    i--;
    while (0 <= i)
         write(1, &str[i--], 1);
    return (hex);
}

//pode haver uma funcao para os hexadecimais x, X e para usar no p
//qual o data type para colocar aqui? nao deve ser unsigned int
//usar strlen p devolver o tamanho doq a gnt vai printar?? 