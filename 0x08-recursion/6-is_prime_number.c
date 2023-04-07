#include "main.h"
/**
 * is_prime_number -  Returns the natural square root of a number.
 * @n: int type
 * Return: char type
 **/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

/**
 * is_prime - function
 * Desc: is_prime
 * @n: number
 * @x: value
 * Return: value of prime numbers
 **/
int is_prime(int n, int x)
{
	if (x < n)
	{
		if (n % x == 0)
		{
			return (0);
		}
		return (is_prime(n, x + 1));
	}
	return (1);
}
