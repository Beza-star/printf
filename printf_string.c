#include "main.h"
/**
 * printf_string - print a string.
 * @value: argument.
 * Return: the length of the string.
 */

int printf_string(va_list value)
{
	char *p;
	int i, len;

	p = va_arg(value, char *);
	if (p == 0)
	{
		p = "(0)";
		len = _strlen(p);
		for (i = 0; i < len; i++)
			_putchar(p[i]);
		return (len);
	}
	else
	{
		len = _strlen(p);
		for (i = 0; i < len; i++)
			_putchar(p[i]);
		return (len);
	}
}
