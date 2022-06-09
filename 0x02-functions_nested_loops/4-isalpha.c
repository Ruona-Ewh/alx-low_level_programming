#include "main.h"
/**
 * _isalpha - function to determine if the character is alphabet
 *
 * @c: variable
 *
 * Return: 1 if its a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

