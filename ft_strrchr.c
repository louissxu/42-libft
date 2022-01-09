char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	char	*ptr;

	ptr = s;
	c = (char)c;
	result = 0;
	while (*ptr)
	{
		if (*ptr == c)
		{
			result = ptr;
		}
		ptr++;
	}
	if (*ptr == c)
	{
		result = ptr;
	}
	return (result);
}

