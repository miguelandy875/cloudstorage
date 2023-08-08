#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocator for arr(s)
  * @memb: number of members
  * @size: size
  *
  * Return: terminator
  */
void *_calloc(unsigned int memb, unsigned int size)
{
	int i = 0, l = 0;
	char *ptr;

	if (memb == 0 || size == 0)
		return (NULL);

	l = memb * size;
	ptr = malloc(l);

	if (ptr == NULL)
		return (NULL);

	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
