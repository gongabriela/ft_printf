
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    //int ret;
    //int original;

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
    ft_printf("If I send this: 1340 as a parameter for %%d\n");
    ft_printf("The original function behaves like this: ");
    original = printf("%d", 1340);
    ft_printf("\nAnd my function behaves like this: ");
    ret = ft_printf("%d", 1340);
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);
    */
    /*//%%
    ft_printf("\nIf I send this: as a parameter for %%\n");
    printf("The original function behaves like this: ");
    original = printf("\n");
    ret = ft_printf("\n");
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);
    */
    /*//%u
    int original = printf("Original: %u", -1);
    int mine = ft_printf("\nMine: %u\n", -1);
    ft_printf("Mine = %d & Original = %d\n", mine, original);
    */
    //%x
    int mine = ft_printf("MINE %X", -1);
    int original = printf(" OG %X", -1);
    ft_printf("Mine = %d & Original = %d\n", mine, original);
    /*//tudo
    ft_printf("\nIf I use all the converters together\n");
    printf("The original function behaves like this: ");
    original = printf("\n");
    ret = ft_printf("\n");
    ft_printf("\nThe original function returns %d characters for this phrase\nMy function returns %d characters for this phrase\n", original, ret);
    */
    

    return (0);
}
