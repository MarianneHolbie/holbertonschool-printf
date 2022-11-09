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
	return (_putchar(ctoprint));
}

/**
 * pr_s- function that print %s
 * @match: type de char to print
 *
 * Return: k
 */

int pr_s(va_list match)
{
	int len = 0;
	char *toprint;

	toprint = va_arg(match, char *);
	len = strlen(toprint);

	if (toprint == NULL)
		toprint = "(null)";

	return (write(1, toprint, len));
}

/**
 * pr_p- function that print %
 * @match: pourcent
 *
 * Return: %
 */

int pr_p(va_list match)
{
	(void) match;
	return (_putchar('%'));
}

