#include "main.h"
/**
 * puts_half - function to print half of a string
 * @str: parameter to be checked
 * Return: void
 */
void puts_half(char *str)
{
	int x, y, count = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
		count++;
	y = (count - 1) / 2;
	for (x = y + 1 ; str[x] != '\0' ; x++)
	       _putchar(str[x]);
	_putchar('\0');
}
