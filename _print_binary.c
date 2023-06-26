#include "main.h"
/**
 * _print_binary - Print a strnumbering
 * @n : number to print
 * Return: length of printed chars.
 */
int	_print_binary(unsigned int n)
{
	int		count;

	count = 0;
	if (n == 1 || n == 0)
		count += _putchar(n + '0');
	else
	{
		count += _print_binary(n / 2);
		count += _print_binary(n % 2);
	}
	return (count);
}