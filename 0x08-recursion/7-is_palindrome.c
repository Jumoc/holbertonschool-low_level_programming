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

	return(is_palindrome_internal(s, size - 1, count + 1));

}

int is_palindrome_size(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (is_palindrome_size(s + 1) + 1);

}

int is_palindrome(char *s)
{
	return (is_palindrome_internal(s, is_palindrome_size(s), 0));
}
