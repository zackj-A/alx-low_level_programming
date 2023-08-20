#include "main.h"
/**
 * _puts_recursion - function to print string
 * @s: value 1
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

int main(void)
{
	char str[] = "Hello, recursion!";

	_puts_recursion(str);
	return (0);
}
