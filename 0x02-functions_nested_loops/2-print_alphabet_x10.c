#include "main.h"

/**
 * print_alphabet - the function to print alphabet 10 time
 * Return: returns 0
 */

void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0 ; i < 10 ; i++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
	}
	_putchar('\n');
}
