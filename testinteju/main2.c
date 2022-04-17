#include <stdio.h>
#include "main.h"

int main(void)
{
    char a = 'Z';
    char *str = "Beloved";
    int num = -762534;
    int len = _printf("Hello world %c %s %d %%\n", a, str, num);
    int len2 = printf("Hello world %c %s %d %%\n", a, str, num);
    printf("%d\n", len);
    printf("%d\n", len2);

    return (0);
}