/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 20:54:32 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/24 12:11:46 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*p;

	if (*lst != NULL)
	{
		p = *lst;
		*lst = NULL;
		while (p != NULL)
		{
			l = p->next;
			ft_lstdelone(p, del);
			p = l;
		}
	}
}
