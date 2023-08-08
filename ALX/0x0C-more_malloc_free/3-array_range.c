#include "main.h"
#include <stdlib.h>

/**
  * array_range - creation of int arr
  * @min: min valiation
  * @max: max valiation
  *
  * Return: int value
  */
int *array_range(int min, int max)
{
	int *m, n = 0;

	if (min > max)
		return (NULL);

	m = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (m == NULL)
		return (NULL);

	while (min <= max)
	{
		m[n] = min;
		n++;
		min++;
	}

	return (m);
}
