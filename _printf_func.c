#
#include "main.h"

/**
 * pr_c- function that print %s
 * @match: type
 */

void pr_c(va_list match)
{
	char ctoprint;

	ctoprint = va_arg(match, int);
	_putchar(ctoprint);
}

/**
 * pr_s- function that print %s
 * @match: type de char to print
 */

void pr_s(va_list match)
{
	int k = 0;
	char *toprint;

	toprint = va_arg(match, char *);

	if (toprint == NULL)
		return;
	else
		for (k = 0; toprint[k] != '\0'; k++)
		{
			_putchar(toprint[k]);
		}
}

/**
 * pr_p- function that print %
 * @match: pourcent
 */

void pr_p(va_list match)
{
	(void) match;
	_putchar('%');
}
