/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxu <lxu@student.42adel.org.au>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:37 by lxu               #+#    #+#             */
/*   Updated: 2022/01/10 16:54:38 by lxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = s;
	c = (char)c;
	while (*result && *result != c)
	{
		result++;
	}
	if (*result == c)
	{
		return (result);
	}
	return (0);
}
