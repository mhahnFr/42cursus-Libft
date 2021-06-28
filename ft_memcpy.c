/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:21:15 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 12:24:37 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	if ((src != NULL || dst != NULL) && n > 0)
	{
		while (counter < n)
		{
			((char *) dst)[counter] = ((char *) src)[counter];
			counter++;
		}
	}
	return (dst);
}
