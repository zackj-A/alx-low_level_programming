#include "main.h"
/**
 * reverse_array - to reverse the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	char y;

	for (x = 0 ; a[x] != '\0' ; x++)
		n++;
	for (x = 0 ; x < n / 2 ; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
