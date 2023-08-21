#include "main.h"
/**
 * _pow_recursion - function to print raise to power
 * @x: integer 1
 * @y: integer 2
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
