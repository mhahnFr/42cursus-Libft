/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:11:48 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 13:14:48 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if (((unsigned char *) s1)[counter] != ((unsigned char *) s2)[counter])
		{
			return (((unsigned char *) s1)[counter]
				- ((unsigned char *) s2)[counter]);
		}
		counter++;
	}
	return (0);
}
