#include "main.h"
#include <stdlib.h>

/**
 * initDigitArray - ...
 * @size: ...
 * Return: ...
 */
unsigned int *initDigitArray(size_t size)
{
	unsigned int *arr = NULL;
	size_t i;

	arr = malloc(sizeof(unsigned int) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return (arr);
}


/**
 * stringIntMultiply - TBD
 *
 * @prod_digits: array to store product operands
 * @n1_digits: multiplicand digits in ASCII
 * @n2_digits: multiplier digits in ASCII
 * @n1_len: digits in multiplicand
 * @n2_len: digits in multiplier
 */
void stringIntMultiply(unsigned int *prod_digits, char *n1_digits,
		       char *n2_digits, size_t n1_len, size_t n2_len)
{
	int i, j, sum;
	unsigned char digit1, digit2;

	if (prod_digits == NULL || n1_digits == NULL || n2_digits == NULL)
		return;

	for (i = n1_len - 1; i >= 0; i--)
	{
		sum = 0;
		digit1 = n1_digits[i] - '0';

		for (j = n2_len - 1; j >= 0; j--)
		{
			digit2 = n2_digits[j] - '0';

			sum += prod_digits[i + j + 1] + (digit1 * digit2);

			prod_digits[i + j + 1] = sum % 10;

			sum /= 10;
		}

		if (sum > 0)
			prod_digits[i + j + 1] += sum;
	}
}


/**
 * stringIsPosInt - validates for a positive integer
 *
 * @s: string to be used
 * Return: 1 for sucess, 0 otherwise
 */
int stringIsPosInt(char *s)
{
	size_t i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (1);
}


/**
 * error - error return
 *
 * @status: exit code
 */
void error(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
}


/**
 * main - entry point
 *
 * @argc: number of cmd line arguments
 * @argv: array of cmd line arguments
 * Return: 0 success, 98 otherwise
 */
int main(int argc, char **argv)
{
	size_t i, av1_len, av2_len, prod_len;
	unsigned int *prod_digits = NULL;

	if (argc != 3 || !stringIsPosInt(argv[1]) ||
	    !stringIsPosInt(argv[2]))
		error(98);

	for (i = 0, av1_len = 0; argv[1][i]; i++)
		av1_len++;

	for (i = 0, av2_len = 0; argv[2][i]; i++)
		av2_len++;

	prod_len = av1_len + av2_len;
	prod_digits = initDigitArray(prod_len);
	if (prod_digits == NULL)
		error(98);

	stringIntMultiply(prod_digits, argv[1], argv[2], av1_len, av2_len);

	for (i = 0; !prod_digits[i] && i < prod_len; i++)
	{}

	if (i == prod_len)
		_putchar('0');

	for (; i < prod_len; i++)
		_putchar(prod_digits[i] + '0');
	_putchar('\n');

	free(prod_digits);

	return (0);
}
