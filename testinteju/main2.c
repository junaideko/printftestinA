#include <stdio.h>
#include "main.h"

int main(void)
{
    char a = 'Z';
    char *str = "Beloved";
    int len = _printf("Hello world %c %s %%\n", a, str);
    int len2 = printf("Hello world %c %s %%\n", a, str);
    printf("%d\n", len);
    printf("%d\n", len2);

    return (0);
}