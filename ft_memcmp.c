int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i])
	}
	return (0);
}
