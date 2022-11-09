#include "main.h"

/**
 * _printf- function that call function corresponding to %char
 * @format: pointer type of arg to print
 *
 * Return: count of charactere
 */

int _printf(const char *format, ...)
{
	int nbpr = 0; /* Nb char print */
	int i, j;

	typ match[] = {
		{'c', pr_c},
		{'s', pr_s},
		{'%', pr_p},
		{0, NULL},
	};

	va_list to_match;

	if (format == NULL)
		return (-1);
	va_start(to_match, format);

	for (i = 0; format[i] != '\0'; i++) /* ajout format car pas null */
	{
		if (format[i] == '%') /* si c'est un % */
		{
			for (j = 0; match[j].vp != 0; j++) /* parcours notre struct */
			{
				if (format[i + 1] == match[j].vp) /* test du char après % */
				{
					nbpr += match[j].f(to_match); /* ajout au compteur de char */
					i++;
					break;
				}
			}
			if (match[j].vp == 0 && format[i + 1]) /* imprime % si pas seul */
			{
				nbpr += _putchar('%');
			}
		}
		else
			nbpr += _putchar(format[i]); /*compteur de char & impression */
	}
	va_end(to_match);
	return (nbpr);
}
