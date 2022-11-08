#include "main.h"

/**
 * _printf- function that call function corresponding to %char
 * @format: pointer type of arg to print
 *
 * Return: charactere
 */

int _printf(const char *format, ...)
{
	int nb = 0; /* nb : number of % read in format*/
	int lenformat, i, j;

	typ match[] = {
		{"c", pr_c},
		{"s", pr_s},
		{"%", pr_p},
		{NULL, NULL},
	};

	va_list to_match;

	lenformat = strlen(format);
	i = 0;
	j = 0;
	va_start(to_match, format);

	while (i < lenformat)
	{
		if (format[i] == '%')
		{
			nb = nb + 1;
			while (j < 4)
			{
				if (format[i + 1] == *match[j].vp)
				{
					match[j].f(to_match);
					break;
				}
				j++;
			}
			i = i + 1;
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(to_match);
	/*_putchar('\n');*/
	return (0);
}
