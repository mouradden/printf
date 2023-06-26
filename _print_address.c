#include "main.h"
/**
 * _print_address - Print a number in hexa
 * @n : number to print
 * @base : base 16
 * Return: length of printed chars.
 */
int	_print_address(unsigned long n, char *base)
{
	int		count;

	count = 0;
	if (n < 16)
	{
		count += _putchar(base[n]);
	}
	else
	{
		count += _print_address(n / 16, base);
		count += _print_address(n % 16, base);
	}
	return (count);
}
