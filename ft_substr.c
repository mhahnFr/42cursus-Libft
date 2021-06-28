/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:00:04 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/23 15:17:36 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	counter;

	sub = malloc(len + 1);
	if (sub != NULL && s != NULL)
	{
		counter = 0;
		if (start < ft_strlen(s))
		{
			while (counter < len && s[counter + start] != '\0')
			{
				sub[counter] = s[counter + start];
				counter++;
			}
		}
		sub[counter] = '\0';
	}
	return (sub);
}
