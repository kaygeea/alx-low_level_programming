#include "main.h"

/**
 * na_prime - a function to check if a given number is a prime number
 * @num: incoming argument to be checked
 *
 * Return: 1 if num is a prime number, otherwise return 0
 */
int na_prime(int num)
{
	if (num % 2 != 0)
	{
		if (num % 3 != 0 || num % 5 != 0 || num % 7 != 0)
			return (1);
	}
	return (0);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: incoming argument
 *
 * Return: 1 if value of n is prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (na_prime(n));
}
