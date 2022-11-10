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
 *  pr_p- function that print %
 *  @match: pourcent
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
 * pr_intmin- prints intmin
 */

void pr_intmin(void)
{
	_putchar('-');
	_putchar('2');
	_putchar('1');
	_putchar('4');
	_putchar('7');
	_putchar('4');
	_putchar('8');
	_putchar('3');
	_putchar('6');
	_putchar('4');
	_putchar('8');
}

/**
 * pr_di- function that print %d and %i
 * @match: i or d
 *
 * Return: length
 */

int pr_di(va_list match)
{
	int integer, count = 0, diviseur, l;
	unsigned int number;
	char result;

	diviseur = 1; /* impossible de diviser par 0 */
	integer = va_arg(match, int);

	if (integer == INT_MIN) /* f° specific to print intmin */
	{
		pr_intmin();
		return (11);
	}
	else
	{
		if (integer < 0) /* si c'est un nég, prend valeur abs et on écrit - */
		{
			_putchar('-');
			integer = integer * (-1);
			count++; /* counter de charactère print */
		}
		number = integer;
		for (l = 0; number / diviseur > 9; l++) /*calcul bigdiviseur(multipl de 10)*/
		{
			diviseur = diviseur * 10;
		}
		for (l = 0; diviseur != 0; l++) /* division succesive par multiple de 10 */
		{
			result = '0' + integer / diviseur; /* dividande division par diviseur */
			_putchar(result);
			count++;
			integer = integer % diviseur; /* reste de la division par diviseur */
			diviseur = diviseur / 10; /* décrémente le diviseur */
		}
	}
	return (count);
}
