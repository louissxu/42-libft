/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42adel.org.au>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:06 by lxu               #+#    #+#             */
/*   Updated: 2022/01/10 20:51:50 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1_ptr;
	char	*s2_ptr;

	s1_ptr = (char *)s1;
	s2_ptr = (char *)s2;
	i = 0;
	while (s1_ptr[i] == s2_ptr[i] && i < n)
	{
		i++;
	}
	if (i < n)
	{
		return (s1_ptr[i] - s2_ptr[i]);
	}
	return (0);
}
