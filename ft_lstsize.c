/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 20:16:41 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/23 20:21:36 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*l;

	if (lst == NULL)
		return (0);
	counter = 1;
	l = lst;
	while (l->next != NULL)
	{
		l = l->next;
		counter++;
	}
	return (counter);
}
