/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42adel.org.au>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:46 by lxu               #+#    #+#             */
/*   Updated: 2022/01/10 21:26:09 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates length of a string.
 * 
 * @param str String to measure.
 * @return size_t Number of chars in string. Not including the null terminator.
 */
size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
	{
		size++;
	}
	return (size);
}
