#include "main.h"
/**
 * _print_octal - Print a number in hexa
 * @n : number to print
 * @base : base 8
 * Return: length of printed chars.
 */
int	_print_octal(unsigned int n, char *base)
{
	int		count;

	count = 0;
	if (n < 8)
	{
		count += _putchar(base[n]);
	}
	else
	{
		count += _print_octal(n / 8, base);
		count += _print_octal(n % 8, base);
	}
	return (count);
}
