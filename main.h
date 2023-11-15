#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

#define S_LONG  sizeof(long)
#define S_SHORT sizeof(short)

int _putchar(char c);
int print_integer(int n);
int _printf(const char *format, ...);
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
int flags, int width, int precision, int size);


int main(void);

#endif /* MAIN_H */
