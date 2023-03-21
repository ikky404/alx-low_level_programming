#include "main.h"

/**
 *_islower - a function that checks for lowercase character
 *
 *@let: charachter to be checked
 *
 * Return: 1 if let is lowercase, otherwise 0
 */

int _islower(int let)
{
	if (let >= 'a' && let <= 'z')
		return (1);
	else
		return (0);
}

