#include "main.h"
#include <stdio.h>

int _printnum(int n)
{
    int i = 0;
    int j = 0;
    int k = 0;

    if (n < 0)
    {
        n = -n;
        j = 1;
    }
    for (i = 1; i <= n; i *= 10)
        k++;
    for (i = 1; i <= k; i *= 10)
    {
        if (n / i < 10)
            _putchar(n / i + '0');
        else
            _putchar(n / i % 10 + '0');
    }
    if (j == 1)
        _putchar('-');
    return (k);
}