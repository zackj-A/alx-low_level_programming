#include "main.h"
/**
 * factorial - function to print factorial
 * @n: value
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
