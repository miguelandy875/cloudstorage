#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - writes array elements sequencially each on newline
 * @arr: array
 * @elmnt: elemnt to print
 * @p_var: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *arr, size_t elmnt, void (*p_var)(int))
{
	unsigned int i;

	if (arr == NULL || p_var == NULL)
		return;

	for (i = 0; i < elmnt; i++)
	{
		p_var(arr[i]);
	}
}

