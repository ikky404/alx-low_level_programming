#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
