#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - concatenates two strings.
  * @str1: 1st string to concatenate
  * @str2: 2nd string to concatenate
  *
  * Return: strings concatenated
  */
char *str_concat(char *str1, char *str2)
{
	int o = 0, p = 0, q = 0, r = 0;
	char *s;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	while (str1[o])
		o++;

	while (str2[p])
		p++;

	r = o + p;
	s = malloc((sizeof(char) * r) + 1);

	if (s == NULL)
		return (NULL);

	p = 0;

	while (q < r)
	{
		if (q <= o)
			s[q] = str1[q];

		if (q >= o)
		{
			s[q] = str2[p];
			p++;
		}

		q++;
	}

	s[q] = '\0';
	return (s);
}
