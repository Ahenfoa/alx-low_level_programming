#include "main.h"

int check_pal(char *s, int p, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - active if a string is a palindrome
 * @s: string to reverse
 *
 * Return: returns 1 if it is a palindrome,returns 0 it's not
*/
int is_palindrome(char *s)
{

	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - checks the length of a string
 * @s: string that calculates length
 *
 * Return:retuns length of the string
*/
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters recursively for a palindrome
 * @s: string that checks
 * @p: propeler
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
*/
int check_pal(char *s, int p, int len)
{

	if (*(s + p) != *(s + len - 1))
		return (0);
	if (p >= len)
		return (1);
	return (check_pal(s, p + 1, len - 1));
}
