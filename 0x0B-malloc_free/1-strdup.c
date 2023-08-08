#include "main.h"
#include <stdlib.h>

/**
  * _strdup - return a pointer to a string copi
  * @str: the string to copi
  *
  * Return: the copied string
  */
char *_strdup(char *str)
{
	int z = 0, h = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[h])
	{
		h++;
	}

	s = malloc((sizeof(char) * h) + 1);

	if (s == NULL)
		return (NULL);

	while (z < h)
	{
		s[z] = str[z];
		z++;
	}

	s[z] = '\0';
	return (s);
}
