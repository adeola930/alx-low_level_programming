#include "main.h"

/**
 * _strlen_recursion - Find the length of a string
 * @s: The string to find length of
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen_recursion(s + len);
	}
	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: String to check
 * @len: The length of s.
 * @index: The index of the string to be checked.
 * Return: 1 if palindrome, 0 if otherwise
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int index = 0;

	int len = _strlen_recursion(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}
