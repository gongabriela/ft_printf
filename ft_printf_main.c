
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int mine;
    int original;

    //%c
    char c = 'G';
    ft_printf("%%c\nArgument: %c\nOG: ", c);
    original = printf("%c", c);
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%c", c);
    ft_printf("\n%d characters was printed\n\n", mine);
    
    //%s 
    char s[] = "42 is very good";
    ft_printf("%%s\nArgument: %s\nOG: ", s);
    original = printf("%s", s);
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%s", s);
    ft_printf("\n%d characters was printed\n\n", mine);

    //%d e %i
    int d = 42;
    ft_printf("%%d\nArgument: %d\nOG: ", d);
    original = printf("%d", d);
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%d", d);
    ft_printf("\n%d characters was printed\n\n", mine);
    
    //%%
    ft_printf("%%\nArgument: %%\nOG: ");
    original = printf("%%");
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%%", c);
    ft_printf("\n%d characters was printed\n\n", mine);
    
    //%u
    unsigned int u = 42840104;
    ft_printf("%%u\nArgument: %u\nOG: ", u);
    original = printf("%u", u);
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%u", c);
    ft_printf("\n%d characters was printed\n\n", mine);
    
    //%x
    int hex = 48174014;
    ft_printf("%%x\nArgument: %d\nOG: ", hex);
    original = printf("%x", hex);
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%x", hex);
    ft_printf("\n%d characters was printed\n\n", mine);

    //%X
    hex = 44041842;
    ft_printf("%%X\nArgument: %d\nOG: ", hex);
    original = printf("%X", hex);
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%X", hex);
    ft_printf("\n%d characters was printed\n\n", mine);

    //p
    void *p;
    p = &hex;
    ft_printf("%%p\nArgument: %p\nOG: ", p);
    original = printf("%p", p);
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%p", p);
    ft_printf("\n%d characters was printed\n\n", mine);

    //tudo
    hex = 400;
    u = 1474014;
    p = &hex;
    ft_printf("%%cspdiuxX%\nOG: ");
    original = printf("%c %s %p %d %i %u %x %X %%", 'G', "Gabi", p, hex, hex, u, hex, hex);
    printf("\n");
    ft_printf("%d characters was printed\nMF: ", original);
    mine = ft_printf("%c %s %p %d %i %u %x %X %%", 'G', "Gabi", p, hex, hex, u, hex, hex);
    ft_printf("\n%d characters was printed\n\n", mine);

    return 0;
}
