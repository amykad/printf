#include "main.h"

int print_integer(int n);

/**
 * _printf - Printf function.
 * @format: format.
 * @...: list of argument
 * Return: Printed chars.
 */

int_ printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int count = 0;

for (; *format != '\0'; format++)
{
if (*format != '%')
{
_putchar(*format);
count++;
}
else
{
format++;
switch (*format)
{
case 'c':
}
char c = (char) va_arg(args, int);

_putchar(c);
count++;
break;
}
case 's':
{

char *s = va_arg(args, char *);
for (; *s != '\0'; s++)
{
_putchar(*s);
count++;
}
break;
}
case '%':
{
_putchar('%');
count++;
break;
}
case 'd':
case 'i':
{
int i = va_arg(args, int);
if (i < 0)
{
_putchar('-');
i = -i;
count++;
}
count += print_integer(i);
break;
}
default:
{
_putchar('%');
_putchar(*format);
count += 2;
break;
}
}
}
}
va_end(args);
return (count);
/**
 * print_integer - Prints an integer to standard output
 * @n: The integer to be printed
 * Return: The number of digits printed (excluding a possible '-' sign)
 */
int print_integer(int n)
{
int count = 0;
if (n == 0)
{
_putchar('0');
count++;
}
else
{
int digits[10];
int index = 0;
while (n)
{
digits[index++] = n % 10;
n /= 10;
}
for (int i = index - 1; i >= 0; i--)
{
_putchar('0' + digits[i]);
count++;
}
}
return (count);
}
