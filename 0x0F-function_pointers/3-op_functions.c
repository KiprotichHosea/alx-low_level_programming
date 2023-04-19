#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - returns the remainder of a number
 * @a: first member
 * @b: second member
 *
 * Return: the  remainder of division of a by b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the remainder of a number
 * @a: first member
 * @b: second member
 *
 * Return: the  remainder of division of a by b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the remainder of a number
 * @a: first member
 * @b: second member
 *
 * Return: the  remainder of division of a by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the remainder of a number
 * @a: first member
 * @b: second member
 *
 * Return: the  remainder of division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of a number
 * @a: first member
 * @b: second member
 *
 * Return: the  remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
