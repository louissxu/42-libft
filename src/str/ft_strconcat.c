/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:29:27 by lxu               #+#    #+#             */
/*   Updated: 2023/08/04 17:29:51 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	total_length(size_t n, va_list args)
{
	size_t	i;
	char	*s;
	size_t	total_length;

	i = 0;
	total_length = 0;
	while (i < n)
	{
		s = va_arg(args, char *);
		total_length += ft_strlen(s);
		i++;
	}
	return (total_length);
}

/**
 * @brief String concateantion.
 * 
 * An implementation of string concatenation. Returns a new heap string which is
 * the result of concatenating a bunch of arg strings. Arg number is variadic.
 * 
 * @param n The number of string to concat.
 * @param ... The strings to concat.
 * @return char* Heap string of the concatenated result.
 */
char	*ft_strconcat(size_t n, ...)
{
	va_list	args;
	size_t	i;
	size_t	len;
	char	*result;
	char	*s;

	va_start(args, n);
	len = total_length(n, args);
	va_end(args);
	result = malloc(len + 1);
	if (!result)
	{
		return (result);
	}
	va_start(args, n);
	i = 0;
	while (i < len)
	{
		s = va_arg(args, char *);
		i += ft_strlcpy(&(result[i]), s, ft_strlen(s) + 1);
	}
	va_end(args);
	return (result);
}
