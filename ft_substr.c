/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42adel.org.au>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:58 by lxu               #+#    #+#             */
/*   Updated: 2022/01/10 16:54:59 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	chars_left;
	char	*result;
	size_t	i;

	chars_left = ft_strlen(s + start);
	if (chars_left < len)
	{
		len = chars_left;
	}
	result = malloc(sizeof *result * len);
	if (!result)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
}

