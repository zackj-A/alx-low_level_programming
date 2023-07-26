#include "main.h"
/**
 * print_array - to print an array
 * @a: value 1
 * @n: value 2
 * Return: void
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0 ; a < n ; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(",");
	}
	printf('\n');
}
