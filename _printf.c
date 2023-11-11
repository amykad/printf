#include "main.h"

void flush_output(char customBuffer[], int *buff_index);

/**
 * print - Printf function
 * @format: Format string.
 * Return: Number of printed characters.
 */
int print(const char *format, ...)
{
int i, printed = 0, printed_chars = 0;
int flags, width, precision, size, buff_index = 0;
va_list args;
char customBuffer[BUFF_SIZE];

if (format == NULL)
return (-1);

va_start(args, format);

for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
customBuffer[buff_index++] = format[i];
if (buff_index == BUFF_SIZE)
flush_output(customBuffer, &buff_index);
printed_chars++;
}
else
{
flush_output(customBuffer, &buff_index);
flags = get_flags(format, &i);
width = get_width(format, &i, args);
precision = get_precision(format, &i, args);
size = get_size(format, &i);
++i;
printed = handle_print(format, &i, args, customBuffer,
flags, width, precision, size);
if (printed == -1)
return (-1);
printed_chars += printed;
}
}
flush_output(customBuffer, &buff_index);

va_end(args);

return (printed_chars);
}

/**
 * flush_output - Prints the contents of the buffer if it exists
 * @customBuffer: Array of characters
 * @buff_index: Index for the next character, represents the buffer length.
 */
void flush_output(char customBuffer[], int *buff_index)
{
if (*buff_index > 0)
write(1, customBuffer,
