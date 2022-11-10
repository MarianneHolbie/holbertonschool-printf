#include "main.h"

/**
 * _printf- function that call function corresponding to %char
 * @format: pointer type of arg to print
 *
 * Return: charactere
 */

int _printf(const char *format, ...)
{
	int nbpr = 0;
	int i, j, out;

	typ match[] = {
		{'c', pr_c},
		{'s', pr_s},
		{'%', pr_p},
		{0, NULL},
	};

	va_list to_match;

	va_start(to_match, format);
	if (format == NULL || format[0] == '%')
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		out = i;
		if (format[i] == '%')
		{
			for (j = 0; match[j].vp != 0; j++)
			{
				if (format[i + 1] == match[j].vp)
				{
					nbpr += match[j].f(to_match);
					i++;
				}
			}
		}
		else if (format[i] == '\n')
		{
			_putchar('\n');
			nbpr -= 1;
		}
		else
			_putchar(format[i]);
		/*out++;*/
	}
	nbpr += out;
	va_end(to_match);
	return (nbpr);
}
