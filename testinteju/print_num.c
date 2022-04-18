#include <unistd.h>
/**
 * print_int - prints an integer
 * @d: integer to print
 * Return: number of characters printed
 */

int print_int(int d)
{
	int i, len = 1, num, total = 0;
	char c;

	if (d < 0)
	{
		write(1, "-", 1);
		total++;
		d *= -1;
	}

	num = d;

	for (i = 0; num > 9; i++)
	{
		len *= 10;
		num /= 10;
	}

	while (i >= 0)
	{
		c = d / len + '0';
		write(1, &c, 1);
		total++;
		d %= len;
		len /= 10;
		i--;
	}
	return (total);
}
