#include "main.h"
/**
 * _print - Print c and s
 * @args: argument.
 * @c : c or s
 * Return: length of printed chars.
 */
int	ft_print(va_list args, char c)
{
	int		count;

	count = 0;
	if (c == 'c')
		count += _putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	return (count);
}
