#include "main.h"
/**
 * puts2 - function that prints other characters of a string
 * @str: parameter to print other characters
 * Return: void
 */
void puts2(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
