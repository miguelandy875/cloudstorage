#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars,
  * and initializes it with a specific char.
  * @size: The size of the array
  * @ch: specific char
  *
  * Return: filled array
  */
char *create_array(unsigned int size, char ch)
{
	unsigned int x;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		str[x] = ch;
	}

	return (str);
}
