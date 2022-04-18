#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int print_int(int n)
{
    int i, len = 1, num, total = 0;
    char c;

    if (n < 0)
    {
        putchar('-');
        total++;
        n *= 1;
    }
    num = n;

    for (i = 0; num > 9; i++)
    {
        len *= 10;
        num /= 10;
    }

    while (i >= 0)
    {
        c = n / len + '0';
        write(1, &c, 1);
            total++;
        n %= len;
        len /= 10;
        i--;
    }
    return total;
}
