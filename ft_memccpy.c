/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:36:07 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 12:20:57 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *) dst)[counter] = ((unsigned char *) src)[counter];
		if (((unsigned char *) src)[counter] == (unsigned char) c)
			return (&dst[counter + 1]);
		counter++;
	}
	return (NULL);
}
