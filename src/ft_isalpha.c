/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:53:12 by mhahn             #+#    #+#             */
/*   Updated: 2021/08/11 17:54:55 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
			|| ((unsigned char) c >= 'a' && (unsigned char) c <= 'z'))
		&& c < 128)
	{
		return (1);
	}
	return (0);
}
