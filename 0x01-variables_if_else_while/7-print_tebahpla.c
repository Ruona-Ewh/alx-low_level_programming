#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
char n;

for (n = 'z'; n >= 'a'; --n)
	putchar(n);
putchar(10);

return (0);
}
