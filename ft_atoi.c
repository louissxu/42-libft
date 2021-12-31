#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	result;
	int			is_positive;
	char		*ptr;

	result = 0;
	is_positive = 1;
	ptr = str;
	while (*ptr && ft_isspace(*ptr))
	{
		ptr++;
	}
	if (*ptr == '-')
	{
		is_positive = -1;
		ptr++;
	}
	while (*ptr && ft_isdigit(*ptr))
	{
		result = result * 10;
		result = result + *ptr - '0';
		ptr++;
	}
	result = result * is_positive;
	return ((int)result);
}
