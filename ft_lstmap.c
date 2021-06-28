/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:02:48 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/25 20:28:25 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*nl;
	t_list	*ns;

	l = lst;
	ns = NULL;
	while (l != NULL)
	{
		if (ns == NULL)
		{
			ns = ft_lstnew(f(l->content));
			nl = ns;
		}
		else
		{
			nl->next = ft_lstnew(f(l->content));
			nl = nl->next;
		}
		if (nl == NULL)
			ft_lstclear(&ns, del);
		l = l->next;
	}
	return (ns);
}
