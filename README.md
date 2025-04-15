# ft_printf

Re-implementation of the C `printf` function. This guide is written to help you, a fellow 42 student, understand what you need to complete this project and how to structure it effectively.

## Table of Contents

- [Overview](#overview)  
- [Project Requirements](#project-requirements)  
- [What You Should Know Before Starting](#what-you-should-know-before-starting)  
  - [How printf Works](#how-printf-works)  
  - [Variadic Functions](#variadic-functions)  
- [Planning Your ft_printf](#planning-your-ft_printf)  
- [Function Structure](#function-structure)  
  - [ft_printf](#ft_printf)  
  - [ft_convert](#ft_convert)  
- [Format Specifiers](#format-specifiers)  
  - [%c - Character](#c---character)  
  - [%s - String](#s---string)  
  - [%d / %i - Integer](#d--i---integer)  
  - [%u - Unsigned Integer](#u---unsigned-integer)  
  - [%p - Pointer](#p---pointer)  
  - [%x / %X - Hexadecimal](#x--x---hexadecimal)  
  - [%% - Percent Sign](#---percent-sign)  
- [Testing](#testing)  
- [Common Pitfalls](#common-pitfalls)  
- [Tips and Best Practices](#tips-and-best-practices)  
- [Optional Bonus Features](#optional-bonus-features)  

## Overview

This project requires you to recreate the `printf` function from `<stdio.h>`. You will need to build your own formatted printing function, handling several format specifiers and managing arguments passed in a variadic fashion.

Example:

```c
ft_printf("Hello %s, you scored %d%%\n", "Gabi", 100);
```

Should output:

```
Hello Gabi, you scored 100%
```

## Project Requirements

- Implement `ft_printf` using only allowed standard functions (mainly `write`)
- Handle these format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- Build your own library and Makefile
- Must return the number of characters printed
- No use of original `printf`, `sprintf`, or buffer management

## What You Should Know Before Starting

### How printf Works

The original `printf` function does the following:

1. Takes a format string with specifiers like `%d`, `%s`, etc.
2. Parses the string and identifies format specifiers
3. Matches each specifier with a value from the arguments
4. Prints each piece one by one
5. Returns the total number of characters printed

### Variadic Functions

In C, you can use variadic functions to pass a variable number of arguments. This is done using the `<stdarg.h>` library.

Key macros:

```c
#include <stdarg.h>

va_list args;
va_start(args, format);       // format is the last fixed argument
int i = va_arg(args, int);    // get next argument
va_end(args);                 // clean up
```

Your function prototype will look like this:

```c
int ft_printf(const char *format, ...);
```

## Planning Your ft_printf

Start by handling a few simple specifiers like `%c`, `%s`, and `%d`. Once those work, move on to:

- `%u` for unsigned integers
- `%x` and `%X` for hex
- `%p` for pointers
- `%%` for the literal percent sign

Suggested structure:

```c
int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    // loop through format string and handle characters/specifiers

    va_end(args);
}
```

Inside your handler:

```c
int ft_convert(char specifier, va_list args)
{
    if (specifier == 'c')
        return ft_putchar(va_arg(args, int));
    else if (specifier == 's')
        return ft_putstr(va_arg(args, char *));
    // etc...
}
```

## Function Structure

### ft_printf

Handles the main parsing of the format string:

```c
int ft_printf(const char *format, ...)
{
    va_list args;
    int result = 0;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            result += ft_convert(*format, args);
        }
        else
            result += write(1, format, 1);
        format++;
    }
    va_end(args);
    return result;
}
```

### ft_convert

Handles each format specifier:

```c
static int ft_convert(char format, va_list args)
{
    if (format == 'c')
        return ft_putchar(va_arg(args, int));
    else if (format == 's')
        return ft_putstr(va_arg(args, char *));
    else if (format == 'd' || format == 'i')
        return ft_putnbr(va_arg(args, int));
    else if (format == 'u')
        return ft_unsigned(va_arg(args, unsigned int));
    else if (format == 'p')
        return ft_pointer(va_arg(args, void *));
    else if (format == 'x')
        return ft_hex(va_arg(args, unsigned int), "0123456789abcdef");
    else if (format == 'X')
        return ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
    else if (format == '%')
        return write(1, "%", 1);
    return 0;
}
```

## Format Specifiers

### %c - Character

Prints a single character:

```c
int ft_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}
```

### %s - String

Prints a null-terminated string:

```c
int ft_putstr(char *s)
{
    int i = 0;
    if (!s)
        return write(1, "(null)", 6);
    while (s[i])
        write(1, &s[i++], 1);
    return i;
}
```

### %d / %i - Integer

Prints a signed integer (recursive approach):

```c
int ft_putnbr(int n)
{
    int count = 0;
    if (n == -2147483648)
        return write(1, "-2147483648", 11);
    if (n < 0)
    {
        count += write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        count += ft_putnbr(n / 10);
    count += ft_putchar(n % 10 + '0');
    return count;
}
```

### %u - Unsigned Integer

```c
int ft_unsigned(unsigned int n)
{
    int count = 0;
    if (n >= 10)
        count += ft_unsigned(n / 10);
    count += ft_putchar(n % 10 + '0');
    return count;
}
```

### %p - Pointer

```c
int ft_pointer(void *ptr)
{
    unsigned long address = (unsigned long)ptr;
    if (!ptr)
        return write(1, "(nil)", 5);
    write(1, "0x", 2);
    return 2 + ft_hexp(address, "0123456789abcdef");
}
```

### %x / %X - Hexadecimal

```c
int ft_hex(unsigned int n, char *base)
{
    int count = 0;
    if (n >= 16)
        count += ft_hex(n / 16, base);
    count += write(1, &base[n % 16], 1);
    return count;
}
```

### %% - Percent Sign

```c
// Already handled inside ft_convert:
return write(1, "%", 1);
```

## Testing

Compare the output and return value of your `ft_printf` with the standard `printf`.

```c
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int real = printf("Real: %d\n", 42);
    int mine = ft_printf("Mine: %d\n", 42);
    printf("Return values - real: %d, mine: %d\n", real, mine);
}
```

Test edge cases like:

- Empty strings
- Null pointers
- Negative numbers
- INT_MIN and INT_MAX
- Hex values
- Pointer values

## Common Pitfalls

- Forgetting to call `va_end`
- Not returning correct character count
- Mishandling NULL strings or pointers
- Recursive integer printing not counting properly
- Handling `INT_MIN` incorrectly
- Not handling `%%` literally

## Tips and Best Practices

- Start small. Get `%c`, `%s`, and `%d` working first
- Write modular helper functions
- Use your `libft` where allowed
- Do not use functions like `itoa`, `strlen`, or `sprintf`
- Compare everything with standard `printf`

## Optional Bonus Features

Once your base version is solid, consider adding:

- Width and precision handling
- Flags like `+`, `-`, `0`, `#`, and space
- Field alignment and padding
- Advanced specifiers like `%n`, `%f` (if allowed)

This project teaches you a lot about how C works under the hood. Take your time, test often, and try to understand every part of what you're writing. You’ve got this!
