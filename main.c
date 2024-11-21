
#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
    int ret;
    int original;

    /*//%c
    ft_printf("\nIf I send 'G' as a parameter for %%c\n");
    ft_printf("The original function behaves like this:\n");
    original = printf("QUARENTA %c DOIS\n", 'G');
    ft_printf("And my function behaves like this:\n");
    ret = ft_printf("QUARENTA %c DOIS\n", 'G');
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);
    */
    //%s 
    //NULL, "", (char *)NULL,  
   /*ft_printf("\nIf I send this: (char *)NULL as a parameter for %%s\n");
    printf("The original function behaves like this:\n");
    original = printf("%s\n", (char *)NULL);
    ft_printf("And my function behaves like this:\n");
    ret = ft_printf("%s\n", (char *)NULL);
    ft_printf("The original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);*/

    /*//%d e %i
    ft_printf("\nIf I send this: -2147483648 as a parameter for %%d\n");
    printf("The original function behaves like this: ");
    original = printf("%d\n", -2147483648);
    ret = ft_printf("%d\n", -2147483648);
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);

    //%%
    ft_printf("\nIf I send this: as a parameter for %%\n");
    printf("The original function behaves like this: ");
    original = printf("\n");
    ret = ft_printf("\n");
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);
    
    //%u
    printf("Original: %u", 2147483647);
    ft_printf("\nMine: %u\n", 2147483647);
    
    //tudo
    ft_printf("\nIf I use all the converters together\n");
    printf("The original function behaves like this: ");
    original = printf("\n");
    ret = ft_printf("\n");
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);
    */


    return (0);
}
