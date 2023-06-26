#include "main.h"
/**
 * _putchar - Print a single char
 * @c : char to print
 * Return: length of printed chars.
 */
int	_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
