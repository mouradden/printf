#ifndef MAIN_H
#define MAIN_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	_printf(const char *format, ...);
int	_print(va_list args, char c);
int	_putstr(char *s);
int	_putchar(char c);

#endif
