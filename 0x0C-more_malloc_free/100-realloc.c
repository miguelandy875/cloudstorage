#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - reallocates a memory block
  * @ptr: pointer to a memor
  * @old_size: allocated space
  * @new_size: new memor block
  *
  * Return: result
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *src = ptr;
	char *dest;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	dest = malloc(sizeof(char) * new_size);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		dest[i] = src[i];

	free(ptr);
	return ((void *)dest);
}
