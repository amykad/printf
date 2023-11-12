#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */

int get_precision(const char *format, int *i, va_list list)
{
int currentPos = *position + 1;
int precision = -1;
if (format[currentPos] != '.')
return (precision);
precision = 0;
for (currentPos += 1; format[currentPos] != '\0'; currentPos++)
{
if (is_digit(format[currentPos]))
{
precision *= 10;
precision += format[currentPos] - '0';
}
else if (format[currentPos] == '*')
{
currentPos++;
precision = va_arg(args, int);
break;
}
else
break;
}
*position = currentPos - 1;
return (precision);
}
