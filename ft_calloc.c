#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	result = malloc(count * size)
	if (!result)
	{
		return (result)
	}
	i = 0;
	while (i < count * size)
	{
		result[i] = '0';
	}
	return (result);
}

