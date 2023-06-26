#include "main.h"
/**
 * _print - Print c and s
 * @args: argument.
 * @c : c or s
 * Return: length of printed chars.
 */
int	_print(va_list args, char c)
{
	int		count;

	count = 0;
	if (c == 'd' || c == 'i')
		count += _putnbr(va_arg(args, int));
	else if (c == 'c')
		count += _putchar(va_arg(args, int));
	else if (c == 's')
		count += _putstr(va_arg(args, char *));
	else if (c == 'x')
		count += _print_hexa(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count += _print_hexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == 'o')
		count += _print_octal(va_arg(args, unsigned int), "01234567");
	else if (c == 'u')
		count += _print_unsigned(va_arg(args, unsigned int));
	return (count);
}
