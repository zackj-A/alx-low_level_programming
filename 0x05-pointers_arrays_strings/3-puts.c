#include "main.h"
/**
 * _puts - to print a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
