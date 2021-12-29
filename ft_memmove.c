void	*memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	int start_at_beginning;

	start_at_beginning = 1;
	i = 0;
	while (i < len)
	{
		if (dst[i] == src)
		{
			start_at_beginning = 0;
			break
		}
		i++;
	}
	if (start_at_beginning)
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			dst[i] = src[i];
			i--;
		}
	}
	return (dst);
}
