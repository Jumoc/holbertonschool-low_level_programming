
/**
 * is_palindrome_internal - checks for palindromes
 *
 * @s: string to check
 * @size: size of the string
 * @count: count the string from zero
 *
 * Return: 1 if palindrome 0 otherwise
 */

int is_palindrome_internal(char *s, int size, int count)
{
	if (size >= 0)
	{
		if (s[count] != s[size - 1])
		{
			return (0);
		}

	} else
	{
		return (1);
	}

	return (is_palindrome_internal(s, size - 1, count + 1));

}

/**
 *is_palindrome_size - checks the size of a string
 *
 * @s: string to be counted
 *
 * Return: size of
 */

int is_palindrome_size(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (is_palindrome_size(s + 1) + 1);

}

/**
 * is_palindrome - checks for palindromes
 *
 * @s: string to check
 *
 * Return: 1 if palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	return (is_palindrome_internal(s, is_palindrome_size(s), 0));
}
