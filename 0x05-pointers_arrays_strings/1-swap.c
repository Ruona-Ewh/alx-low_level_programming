#include "main.h"
/**
 * swap_int - function
 *
 * @a: pointer of the parameter
 * @b: pointer of the parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}
