#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: the string
 * Return: lenght of a string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * is_palind_recursive - checks for srings eql to each other
 * @s: holds value
 * @i: hhoild value
 * @j: holds value
 * Return: 1 if equal, else 0
 **/
int is_palind_recursive(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (is_palind_recursive(s, i + 1, j - 1));
}
/**
 * is_palindrome - checking for a palindrome
 * @s: hoids pointe
 * Return: 1 if is palindrome oterwise 0
 **/
int is_palindrome(char *s)
{
	int slen;

	slen = _strlen_recursion(s);
	if (slen == 0 || *s != s[slen - 1])
		return (0);
	return (is_palind_recursive(s, 0, slen - 1));
}
