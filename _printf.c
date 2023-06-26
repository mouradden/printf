#include "main.h"
/**
 * _printf - Printf function
 * @format: string.
 * Return: length of printed chars.
 */
int	_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			if (format[i + 1] == '%')
			{
				count += _putchar('%');
				i++;
			}
			else
				count += _print(args, format[++i]);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
