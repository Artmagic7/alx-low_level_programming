/* 100-operations.c file */

#include "main.h"

/* Function to add two integers */
int add(int a, int b)
{
	return (a + b);
}

/* Function to subtract two integers */
int sub(int a, int b)
{
	return (a - b);
}

/* Function to multiply two integers */
int mul(int a, int b)
{
	return (a * b);
}

/* Function to divide two integers */
int div(int a, int b)
{
	if (b == 0)
	{
	return (-1); /* Error: division by zero */
	}
	return (a / b);
}

/* Function to calculate the modulo of two integers */
int mod(int a, int b)
{
	if (b == 0)
	{
	return (-1); /* Error: modulo by zero */
	}
	return (a % b);
}

