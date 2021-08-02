/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:25:59 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/23 09:57:54 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	counter;
	size_t	length;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	length = ft_strlen(s);
	str = malloc(length + 1);
	if (str != NULL)
	{
		counter = 0;
		while (counter < length)
		{
			str[counter] = f(counter, s[counter]);
			counter++;
		}
		str[length] = '\0';
	}
	return (str);
}
