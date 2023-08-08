#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sum of 2 nums.
 * @a: 1st num.
 * @b: 2nd num.
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Difference of 2 nums.
 * @a: 1st num.
 * @b: 2nd num.
 *
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Product of 2 nums.
 * @a: 1st num.
 * @b: 2nd number.
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division of 2 nums.
 * @a: 1st num.
 * @b: 2nd num.
 *
 * Return: Quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Remainder of 2 nums.
 * @a: 1st num.
 * @b: 2nd num.
 *
 * Return: Remainder of a & b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
