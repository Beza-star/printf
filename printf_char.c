#include "main.h"
/**
 * printf_char - prints a char.
 * @value: arguments.
 * Return: 1.
 */
int printf_char(va_list value)
{
	char c;

	c = va_arg(value, int);
		_putchar(c);
	return (1);
}
