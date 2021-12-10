
#include "ft_printf.h"
#include <stdio.h>

int main()
{
    printf("original function\n");
    printf("=================\n");
    printf("hello world!\n");
    printf("%%_test %%\n");
    printf("decimal_test_or %d\n", 10);
    printf("my function\n");
    printf("=================\n");
    ft_printf("sadsad\n");
    ft_printf("char_test %c\n", 'c');
    ft_printf("decimal_test %d\n", 10);
}