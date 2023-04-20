#include "3-calc.h"
#include <stdlib.h>
/**
*get_op_func - selects the correct function to perform...,
*@s: operator from argument
*Return: pointer to the operand function
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
	int i = 0;

	while (ops[i].op != 0 && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
