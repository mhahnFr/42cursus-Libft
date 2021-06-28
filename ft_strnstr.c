/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:37:41 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/28 12:06:13 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*call_strnstr(const char *haystack, const char *needle, size_t len, size_t nl)
{
	char	*found;

	found = ft_strchr(haystack, needle[0]);
	if (found != NULL)
	{
		if (ft_strncmp(found, needle, nl) != 0)
			call_strnstr(found, needle, len, nl);
	}
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	counter;
	size_t	nl;

	nl = ft_strlen(needle);
	counter = 0;
	if (nl == 0 || needle == haystack)
		return ((char *) haystack);
	// strncmp
	// strchr
	
	return (NULL);
}

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	counter;
	size_t	index;
	size_t	nl;

	counter = 0;
	index = 0;
	nl = ft_strlen(needle);
	if (nl == 0 || needle == haystack)
		return ((char *) haystack);
	while (counter < len && haystack[counter] != '\0')
	{
		if (haystack[counter] == needle[index])
			index++;
		else if (index == nl)
			return ((char *) &haystack[counter - index]);
		else
			index = 0;
		counter++;
	}
	return (NULL);
}*/
