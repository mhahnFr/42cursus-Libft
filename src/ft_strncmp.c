/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:17:50 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 13:47:46 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ctr;

	ctr = 0;
	while (ctr < n)
	{
		if (((unsigned char *) s1)[ctr] != ((unsigned char *) s2)[ctr])
			return (((unsigned char *) s1)[ctr] - ((unsigned char *) s2)[ctr]);
		if (s1[ctr] == '\0')
			break ;
		ctr++;
	}
	return (0);
}
