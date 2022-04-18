#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints data according to a format
 * @format: format string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, j, d, total = 0;
	va_list args;
	char c, *s;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				write(1, "%", 1);
				total++;
			} else if (format[i] == 'd' || format[i] == 'i')
			{
				d = va_arg(args, int);
				total += print_int(d);
			} else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				for (j = 0; s[j] != '\0'; j++)
				{
					write(1, &s[j], 1);
					total++;
				}
			} else if (format[i] == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				total++;
			}
		} else
		{
			write(1, &format[i], 1);
			total++;
		}
	}
	va_end(args);
	return (total);
}
