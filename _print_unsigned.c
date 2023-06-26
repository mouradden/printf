#include "main.h"
/**
 * _print_unsigned_int - Print unsigned
 * @n : number to print
 * Return: length of printed chars.
 */
int	_print_unsigned_int(unsigned int n)
{
	int		count;

	count = 0;
	count += _putnbr(n);
	return (count);
}
