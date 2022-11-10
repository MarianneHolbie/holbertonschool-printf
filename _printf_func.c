#include "main.h"

/**
 * pr_c- function that print %s
 * @match: type
 *
 * Return: char to print
 */

int pr_c(va_list match)
{
	char ctoprint;

	ctoprint = va_arg(match, int);
	_putchar(ctoprint);
	return (1);
}

/**
 * pr_s- function that print %s
 * @match: type de char to print
 *
 * Return: lenght of string
 */

int pr_s(va_list match)
{
	int k = 0;
	char *toprint; /* pointer to string to print */

	toprint = va_arg(match, char *);

	if (toprint == NULL)
		toprint = "(null)";

	for (k = 0; toprint[k] != '\0'; k++)
	{
		_putchar(toprint[k]);
	}
	return (k); /* k count length of toprint */
}

/**
 * pr_p- function that print %
 * @match: pourcent
 *
 * Return: %
 */

int pr_p(va_list match)
{
	(void) match; /* mute match */
	_putchar('%');
	return (1);
}
