#include <stdio.h>
#include <math.h>

/**
 * op_add - adds @a and @b
 * @a: input 1
 * @b: input 2
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - gets the difference of @a and @b
 *@a: input 1
 * @b: input 2
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies @a and @b
 * @a: input 1
 * @b: input 2
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides @a by @b
 * @a: input 1
 * @b: input 2
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - gets the reminder of the division between @a and @b
 *@a: input 1
 * @b: input 2
 *Return: integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
