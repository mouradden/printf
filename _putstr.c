#include "main.h"
/**
 * _putstr - Print a string
 * @s : string to print
 * Return: length of printed chars.
 */
int	_putstr(char *s)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!s)
	{
		return (_putstr("(null)"));
	}
	while (s[i])
	{
		count += _putchar(s[i]);
		i++;
	}
	return (count);
}
