#include "libft.h"

static	int	ft_inset(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_inset(s1[start], set))
	{
		start++;
	}
	while(end > start && ft_inset(s1[end - 1], set))
	{
		end--;
	}
	result = malloc(sizeof *result * (end - start + 1));
	if (!result)
	{
		return (result);
	}
	i = 0;
	while (i + start < end)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}