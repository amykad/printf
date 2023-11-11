#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
void flush_output(char customBuffer[], int *buff_index);
int main(void);

#endif
