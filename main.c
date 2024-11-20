
#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
    int ret;
    int original;

    //%c
    ft_printf("\nIf I send NULL as a parameter for %%c\n");
    ft_printf("The original function behaves like this:\n");
    original = printf("QUARENTA %c DOIS\n", NULL);
    ft_printf("And my function behaves like this:\n");
    ret = ft_printf("QUARENTA %c DOIS\n", NULL);
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);

    /*//%s 

   ft_printf("\nIf I send this: as a parameter for %%s\n");
    printf("The original function behaves like this: ");
    original = printf("\n");
    ret = ft_printf("\n");
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);

    //%d e %i
    ft_printf("\nIf I send this: as a parameter for %%d\n");
    printf("The original function behaves like this: ");
    original = printf("\n");
    ret = ft_printf("\n");
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);

    //%%
    ft_printf("\nIf I send this: as a parameter for %%\n");
    printf("The original function behaves like this: ");
    original = printf("\n");
    ret = ft_printf("\n");
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);

    //tudo
    ft_printf("\nIf I use all the converters together\n");
    printf("The original function behaves like this: ");
    original = printf("\n");
    ret = ft_printf("\n");
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);
    */
    return (0);
}
