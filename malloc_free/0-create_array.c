#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - This function create un pointer.
 * @size: Size for our pointer.
 * @c: Character for initialize the pointer.
 *
 * Return: Success return a pointer, Error NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter;

	counter = 0;

	ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	while (counter < size)
	{
		ptr[counter] = c;
		counter++;
	}
	return (ptr);
}
