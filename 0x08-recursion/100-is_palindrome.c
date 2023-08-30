#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_alpha - Checks if a character is an alphabetic character.
 * @c: The character to be checked.
 *
 * Return: true if the character is alphabetic, false otherwise.
 */
bool is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * check_palindrome - Recursive function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the current substring.
 * @end: The ending index of the current substring.
 *
 * Return: true if the substring is a palindrome, false otherwise.
 */
bool check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (true);
	}

	if (!is_alpha(s[start]))
	{
		return (check_palindrome(s, start + 1, end));
	}

	if (!is_alpha(s[end]))
	{
		return (check_palindrome(s, start, end - 1));
	}

	if (s[start] != s[end])
	{
		return (false);
	}

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Wrapper function to check if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (check_palindrome(s, 0, length - 1));
}

