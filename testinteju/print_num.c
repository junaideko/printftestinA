#include "main.h"
#include <stdio.h>

int _printnum(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = n * -1;
    }
    else
    {
        num = n;
    }
    if (num / 10)
    {
        _printnum(num / 10);
        _putchar((num % 10) + '0');
    }
}