char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = s;
	c = (char)c;
	while (*result && *result != c)
	{
		result++;
	}
	if (*result == c)
	{
		return (result);
	}
	return (0);
}
