#include "main.h"

/**
 * print_unsigned - Prints an unsigned number.
 *
 * @args: List of arguments.
 * @output_buffer: Buffer array to handle print.
 * @active_flags: Calculates active flags.
 * @field_width: Get width.
 * @precision: Precision specification.
 * @size: Size specifier.
 *
 * Return: Number of characters printed.
 */
int print_unsigned(va_list args, char output_buffer[],
int active_flags, int field_width, int precision, int size)
{
int buffer_index = BUFF_SIZE - 2;
unsigned long int number = va_arg(args, unsigned long int);
number = convert_size_unsgnd(number, size);
if (number == 0)
output_buffer[buffer_index--] = '0';
output_buffer[BUFF_SIZE - 1] = '\0';
while (number > 0)
{
output_buffer[buffer_index--] = (number % 10) + '0';
number /= 10;
}
buffer_index++;
return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**
 * print_octal - Prints an unsigned number in octal notation.
 *
 * @args: List of arguments.
 * @output_buffer: Buffer array to handle print.
 * @active_flags: Calculates active flags.
 * @field_width: Get width.
 * @precision: Precision specification.
 * @size_modifier: Size specifier.
 *
 * Return: Number of characters printed.
 */
int print_octal(va_list args, char output_buffer[],
int active_flags, int field_width, int precision, int size_modifier)
{
int index = BUFF_SIZE - 2;
unsigned long int number = va_arg(args, unsigned long int);
unsigned long int original_number = number;
UNUSED(field_width);
number = convert_size_unsigned int(number, size_modifier);
if (number == 0)
output_buffer[index--] = '0';
output_buffer[BUFF_SIZE - 1] = '\0';
while (number > 0)
{
output_buffer[index--] = (number % 8) + '0';
number /= 8;
}
if (active_flags & F_HASH && original_number != 0)
output_buffer[index--] = '0';
index++;
return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
