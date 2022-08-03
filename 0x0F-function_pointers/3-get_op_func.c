#include "3-calc.h"
/**
 * get_op_func - function to select the correct operation to carry out
 * @s: pointer of tyype char
 *
 * Return: pointer to a function
 */

int (*get_op_func(char *s))(int, int)
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
	while ((ops + i)->op != NULL)
	{
		if ((ops + i)->op[0] == *s)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}

