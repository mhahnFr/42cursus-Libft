/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:37:41 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/28 14:27:40 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	counter;
	size_t	nl;
	size_t	index;

	nl = ft_strlen(needle);
	counter = 0;
	if (nl == 0 || needle == haystack)
		return ((char *) haystack);
	while (counter < len && haystack[counter] != '\0')
	{
		if (haystack[counter] == needle[0])
		{
			index = 0;
			while (needle[index] != '\0' && counter + index < len)
			{
				if (haystack[counter + index] != needle[index])
					break ;
				index++;
			}
			if (index == nl)
				return ((char *) haystack + counter);
		}
		counter++;
	}
	return (NULL);
}
