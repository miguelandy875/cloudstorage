#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - chooses a function to satisfy
 *               the user's needs.
 * @str: The operator passed as argument.
 *
 * Return: A pointer to the function that matches
 *         the operator provided as a parameter.
 */
int (*get_op_func(char *str))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *str)
		i++;

	return (ops[i].a_func);
}
