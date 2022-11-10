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

/**
 * pr_di- function that print an integer
 * @match: integer to print
 *
 * Return: an integer
 */

int pr_di(va_list match)
{
	int integer, l, number, result, divisor, count = 0;

	divisor = 1; /* impossible to divide by 0*/
	integer = va_arg(match, int);

	if (integer < 0) /* if nb neg print '-' and take abs value*/
	{
		_putchar('-');
		integer = integer * (-1);
		count++; /* counter de char print */
	}
	number = integer;

	for (l = 0; number > 9; l++) /* find largest divisor, multiple of 10*/
	{
		number = number / divisor;
		divisor = divisor * 10;
	}

	for (l = 0; divisor != 0; l++) /* print the full integer*/
	{
		result = integer / divisor;
		_putchar(result + '0');
		count++;
		integer = integer % divisor; /* reste de la division par diviseur*/
		divisor = divisor / 10; /* décrémentation du diviseur*/
	}
	return (count);
}
