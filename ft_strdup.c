char	*strdup(const char *s1)
{
	char	*result;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	result = malloc(sizeof *result * len);
	if (!result)
	{
		return (result);
	}
	i = 0;
	while (i < len)
	{
		result[i] = s1[i];
		i++;
	}
	return (result);
}
