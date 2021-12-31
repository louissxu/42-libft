char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
	{
		return (haystack);
	}
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && \
				haystack[i + j] == needle[j] && i + j < len)
		{
			j++
		}
		if (!needle[j] && i + j <= len)
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
