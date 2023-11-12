#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list);
int get_size(const char *format, int *i);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[]
int print_pointer(va_list types, char buffer[],
int flags, int width, int precision, int size)
int print_non_printable(va_list types, char buffer[],
int flags, int width, int precision, int size)
int print_reverse(va_list types, char buffer[],
int flags, int width, int precision, int size)
int print_rot13string(va_list types, char buffer[],
int flags, int width, int precision, int size)
int print_octal(va_list args, char output_buffer[],
int active_flags, int field_width, int precision, int size_modifier)
void flush_output(char customBuffer[], int *buff_index);

int main(void);

#endif /* MAIN_H */
