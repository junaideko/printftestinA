#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *dest, *argstr;

	dest = malloc(sizeof(char) * 1500);

	if (dest == NULL)
		return (1);

	va_start(ap, format);
	while (format[i] != '\0')
	{

		if (format[i] == '%')
		{
			i++;
			/**
			 *  %c case
			 */
			if (format[i] == 'c')
			{
				dest[j] = (char)va_arg(ap, int);
				j++;
			}
			else if (format[i] == 's')
			{
				argstr = va_arg(ap, char *);
				_strcpy(&dest[j], argstr);
				j += _strlen(argstr);
			}
			else if (format[i] == '%')
			{
				dest[j] = '%';
				j++;
			}
			else if (format[i] == 'd')
			{
				dest[j] = '%';
				j++;
				dest[j] = 'd';
				j++;
			}
		}
		else
		{
			dest[j] = format[i];
			j++;
		}
		i++;
	}

	write(1, dest, j);
	va_end(ap);
	free(dest);
	return (j);
}
