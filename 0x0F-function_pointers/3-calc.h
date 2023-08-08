#ifndef CALC_H
#define CALC_H
/**
 * struct op - structure named op.
 * @op: The operator.
 * @a_func: an associated function.
 */
typedef struct op
{
	char *op;
	int (*a_func)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *str))(int, int);
#endif
