/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:54:14 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 15:21:52 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	rmc(const char str, const char *set)
{
	size_t	sc;

	sc = 0;
	while (set[sc] != '\0')
	{
		if (str == set[sc])
			return (1);
		sc++;
	}
	return (0);
}

static void	seo(size_t *eo, const char *str, const char *set)
{
	size_t	counter;

	counter = *eo;
	while (counter > 0)
	{
		if (rmc(str[counter - 1], set))
			*eo = *eo - 1;
		else
			break ;
		counter--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	counter;
	size_t	so;
	size_t	eo;

	if (s1 == NULL)
		return (NULL);
	counter = 0;
	so = 0;
	eo = ft_strlen(s1);
	while (s1[counter] != '\0')
	{
		if (rmc(s1[counter], set))
			so++;
		else
			break ;
		counter++;
	}
	if (so < eo)
		seo(&eo, s1, set);
	return (ft_substr(s1, so, eo - so));
}
