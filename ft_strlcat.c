size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	while (dst[i] && i < dstsize - 1)
	{
		i++;
	}
	j = 0;
	while (src[j] && (i + j) < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
	{
		dst[i + j] = '\0';
	}
	j = 0;
	while (src[j])
	{
		j++;
	}
	return (i + j);
}


