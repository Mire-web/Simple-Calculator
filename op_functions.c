#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 *
 * @a:
 * @b:
 * Return: int
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtract integers
 *
 * @a: integer one
 * @b: integer two
 * Return: int
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiply integers
 *
 * @a: integer one
 * @b: integer two
 * Return: int
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide integers
 *
 * @a: integer one
 * @b: integer two
 * Return: int
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - return modulo of integers
 *
 * @a: integer one
 * @b: integer two
 * Return: int
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}