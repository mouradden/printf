#include "main.h"
/**
 * _putnbr - Print a strnumbering
 * @n : number to print
 * Return: length of printed chars.
 */
int	_putnbr(long n)
{
	int		count;

	count = 0;
	if (n <= 9 && n >= 0)
		count += _putchar(n + '0');
	else if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
		count += _putnbr(n);
	}
	else
	{
		count += _putnbr(n / 10);
		count += _putnbr(n % 10);
	}
	return (count);
}
