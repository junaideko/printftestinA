#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0, len = 0;
	char *dest, *argstr;

	while (format[len] != '\0')
		len++;

	dest = malloc(sizeof(char) * 1500);

	va_start(ap, format);
	while (format[i] != '\0')
	{

		if (format[i] == '%')
		{
			i++;
			//%c case
			if (format[i] == '%' && format[i + 1] == 'c')
			{
				i++;
				dest[j] = (char)va_arg(ap, int);
				j++;
			}
			// %s case
			else if (format[i] == '%' && format[i + 1] == 's')
			{

				argstr = va_arg(ap, char *);
				_strcpy(&dest[j], argstr);
				j += _strlen(argstr);
			}
			else
			{
				dest[j] = format[i];
				j++;
			}
			i++;
		}

		write(1, dest, i);
		va_end(ap);
		free(dest);
		return (i);
	}
}

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
