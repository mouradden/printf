#ifndef MAIN_H
#define MAIN_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	_printf(const char *format, ...);
int	_print(va_list args, char c);
int	_putstr(char *s);
int	_putchar(char c);
int	_putnbr(long n);
int	_print_hexa(unsigned int n, char *base);
int	_print_unsigned(unsigned int n);
int	_print_octal(unsigned int n, char *base);
int	_print_address(unsigned long n, char *base);
#endif
