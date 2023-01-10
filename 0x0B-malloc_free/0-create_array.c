#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it
 *               with a specific char.
 *
 * @size: This is the length of the array
 * @c: This is the input character
 *
 * Return: An Array Initialized with the specific char
 */

char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size == 0)
		return (NULL);
	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}
	return (res);
}
