#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print_buffer(char buffer[], int *buff_ind);

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 */
void _putchar(char c)
{
putchar(c);
}

/**
 * _puts - Writes a string to stdout.
 * @s: The string to be written.
 */
void _puts(char *s)
{
for (int i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
}

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (format == NULL)
return (-1);
va_start(args, format);
for (int i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else
{
i++;
switch (format[i])
{
case 'c':
{
char c = (char)va_arg(args, int);
_putchar(c);
count++;
break;
}
case 's':
{
char *s = va_arg(args, char *);
_puts(s);
count += strlen(s);
break;
}
case '%':
{
_putchar('%');
count++;
break;
va_end(args);
return (count);
}
/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buff_ind: Pointer to an index representing the length of the buffer
 */
void print_buffer(char buffer[], int *buff_ind);
{
if (*buff_ind > 0)
write(1, buffer, *buff_ind);
*buff_ind = 0;
}
