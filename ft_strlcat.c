/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:36:45 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/21 17:21:22 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	size;
	size_t	index;

	size = ft_strlen(dst);
	counter = size;
	index = 0;
	if (dstsize != 0)
	{
		while (counter < dstsize - 1 && index < ft_strlen(src))
		{
			dst[counter] = src[index];
			counter++;
			index++;
		}
		if (size < dstsize)
			dst[counter] = '\0';
	}
	if (dstsize > size)
		return (size + ft_strlen(src));
	return (dstsize + ft_strlen(src));
}
