#include <stdlib.h>
#include "main.h"

/**
 * count_word - words counter
 * @s: string to be used
 *
 * Return: found words
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}
/**
 * **strtow - string to words
 * @str: string to be used
 *
 * Return: pointer
 */
char **strtow(char *str)
{
	char **grid, *x;
	int m, n = 0, counts, ln = 0, o = 0, j, k;

	while (*(str + ln))
		ln++;
	counts = count_word(str);
	if (counts == 0)
		return (NULL);

	grid = (char **) malloc(sizeof(char *) * (counts + 1));
	if (grid == NULL)
		return (NULL);

	for (m = 0; m <= ln; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (o)
			{
				k = m;
				x = (char *) malloc(sizeof(char) * (o + 1));
				if (x == NULL)
					return (NULL);
				while (j < k)
				*x++ = str[j++];
				*x = '\0';
				grid[n] = x - o;
				n++;
				o = 0;
			}
		}
		else if (o++ == 0)
			j = m;
	}

	grid[n] = NULL;

	return (grid);
}
