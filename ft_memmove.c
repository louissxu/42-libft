void	*memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	
	if (dst == src)
	{
		return (dst);
	}
	if (src - dst > 0)
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
