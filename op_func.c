#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Get the operator object
 *
 * @s: operator passed as argument
 * Return: int(*)(int int)
 */

int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%%", op_mod},
{NULL, NULL}
};

while (*(ops[i].op) != *s && ops[i].op != NULL)
i++;
return (ops[i].f);
}