#include <stdarg.h>
#include 


	va_start(ap, format);
	while (format[i] != '\0')
	{
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

			argstr = va_arg(ap, char*);
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

int main(void)
{
	char a = 'Z';

	char *str = "Beloved";
}
