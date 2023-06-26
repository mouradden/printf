#include "main.h"

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
