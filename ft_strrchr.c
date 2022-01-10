/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42adel.org.au>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:55 by lxu               #+#    #+#             */
/*   Updated: 2022/01/10 16:54:56 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	char	*ptr;

	ptr = s;
	c = (char)c;
	result = 0;
	while (*ptr)
	{
		if (*ptr == c)
		{
			result = ptr;
		}
		ptr++;
	}
	if (*ptr == c)
	{
		result = ptr;
	}
	return (result);
}

