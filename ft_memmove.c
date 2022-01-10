/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42adel.org.au>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:09 by lxu               #+#    #+#             */
/*   Updated: 2022/01/10 21:20:14 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_ptr;
	char	*src_ptr;

	dst_ptr = dst;
	src_ptr = (char *)src;
	if (dst_ptr == src_ptr)
	{
		return (dst);
	}
	if (src_ptr - dst_ptr > 0)
	{
		i = 0;
		while (i < len)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			dst_ptr[i] = src_ptr[i];
			i--;
		}
	}
	return (dst);
}
