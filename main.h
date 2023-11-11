#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list args);
int get_precision(const char *format, int *i, va_list args);
int get_size(const char *format, int *i);
int handle_print(
const char *format, int *i, va_list args,
char buffer[], int flags, int width, int precision, int size
);
int _printf(const char *format, ...);
void flush_output(char customBuffer[], int *buff_index);
int main(void);

#endif
