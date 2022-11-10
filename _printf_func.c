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
	char *toprint;

	toprint = va_arg(match, char *);

	if (toprint == NULL)
		toprint = "(null)";

	for (k = 0; toprint[k] != '\0'; k++)
	{
		_putchar(toprint[k]);
	}
	return (k); /* test au lieu de k */
}

/**
 *  pr_p- function that print %
 *  @match: pourcent
 *
 * Return: %
 */

int pr_p(va_list match)
{
	(void) match;
	_putchar('%');
	return (1);
}

/**
 * pr_di- function that print %d and %i
 * @match: i or d
 *
 * Return: length
 */

int pr_di(va_list match)
{
	int integer, count = 0, diviseur, l, number, result;

	diviseur = 1; /* impossible de diviser par 0 */
	integer = va_arg(match, int);

	if (integer < 0) /* si c'est un nég, prend valeur abs et on écrit - */
	{
		_putchar('-');
		integer = integer * (-1);
		count++; /* counter de charactère print */
	}
	number = integer;
	for (l = 0; number > 9; l++) /* calcule le+ grand diviseur (multiple de 10) */
	{
		number = number / diviseur;
		diviseur = diviseur * 10;
	}
	for (l = 0; diviseur != 0; l++) /* division succesive par multiple de 10 */
	{
		result = integer / diviseur; /* dividande de la division par diviseur */
		_putchar(result + '0');
		count++;
		integer = integer % diviseur; /* reste de la division par diviseur */
		diviseur = diviseur / 10; /* décrémente le diviseur */
	}
	return (count);
}
