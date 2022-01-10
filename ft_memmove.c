/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42adel.org.au>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:09 by lxu               #+#    #+#             */
/*   Updated: 2022/01/10 16:54:10 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	
	if (dst == src)
	{
		return (dst);
	}
	if (src - dst > 0)
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			dst[i] = src[i];
			i--;
		}
	}
	return (dst);
}
