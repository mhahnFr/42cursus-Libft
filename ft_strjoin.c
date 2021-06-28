/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:41:28 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 19:39:05 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ret = malloc(len1 + len2 + 1);
	if (ret != NULL)
	{
		ft_memcpy(ret, s1, len1);
		ft_memcpy(&ret[len1], s2, len2);
		ret[len1 + len2] = '\0';
	}
	return (ret);
}
