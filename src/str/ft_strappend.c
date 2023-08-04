#include "libft.h"

#include <stdio.h>

/**
 * @brief String append in place
 * 
 * Appends a heap string with another string. Does so in place. Therefore must
 * be passed the address of the char* string.
 * 
 * @param s1 Address of the first string.
 * @param s2 Second string to append.
 */

void	ft_strappend(char **s1, char *s2)
{
	char	*new_str;

	new_str = ft_strconcat(2, *s1, s2);
	if (!new_str)
	{
		return;
	}
	free(*s1);
	*s1 = new_str;
}