#include "main.h"
/**
 * _print_hexa - Print a number in hexa
 * @n : number to print
 * @base : base 16
 * Return: length of printed chars.
 */
int	_print_hexa(unsigned int n, char *base)
{
	int		count;

	count = 0;
	if (n < 16)
	{
		count += _putchar(base[n]);
	}
	else
	{
		count += _print_hexa(n / 16, base);
		count += _print_hexa(n % 16, base);
	}
	return (count);
}
