/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:29:18 by lxu               #+#    #+#             */
/*   Updated: 2023/08/14 18:45:24 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief String append in place
 * 
 * Appends a heap string with another string. Does so in place. Therefore must
 * be passed the address of the char* string.
 * 
 * @param s1 Address of the first string.
 * @param s2 Second string to append.
 */

#include <stdio.h>

void	ft_strappend(char **s1, const char *s2)
{
	char	*new_str;

	if (!*s1 && !s2)
	{
		return ;
	}
	if (!*s1)
	{
		*s1 = ft_strdup(s2);
		return ;
	}
	if (!s2)
	{
		return ;
	}
	if (!s2[0])
	{
		return ;
	}
	new_str = ft_strconcat(2, *s1, s2);
	if (!new_str)
	{
		return ;
	}
	free(*s1);
	*s1 = new_str;
}
