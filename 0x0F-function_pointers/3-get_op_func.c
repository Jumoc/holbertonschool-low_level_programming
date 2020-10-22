#include "3-calc.h"

/**
 * get_op_func - operates two numbers
 *
 * @s: caracter operator
 *
 * Return: result of the operation.
 */
int (*get_op_func(char *s))(int a, int b)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s != NULL && *(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
