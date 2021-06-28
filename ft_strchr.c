/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 21:08:41 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 20:47:40 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	size;
	int	counter;

	size = ft_strlen(s);
	counter = 0;
	while (counter <= size)
	{
		if (s[counter] == (char) c)
			return ((char *) &s[counter]);
		counter++;
	}
	return (NULL);
}
