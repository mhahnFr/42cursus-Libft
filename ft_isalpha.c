/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:53:12 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 13:05:44 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((((unsigned char) c >= 65 && (unsigned char) c <= 90)
			|| ((unsigned char) c >= 97 && (unsigned char) c <= 122))
		&& c < 128)
	{
		return (1);
	}
	return (0);
}
