#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;:

	s = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == c);
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
