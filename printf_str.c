#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @p: Type char pointer
 * Return: c.
 */
int _strlen(char *p)
{
	int c;

	for (c = 0; p[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @p: Type char pointer
 * Return: c
 */
int _strlenc(const char *p)
{
	int c;

	for (c = 0; p[c] != 0; c++)
		;
	return (c);
}
