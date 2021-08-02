/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:41:48 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/23 19:51:01 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*nl;

	nl = (t_list *) malloc(sizeof(t_list));
	if (nl == NULL)
		return (NULL);
	nl->content = content;
	nl->next = NULL;
	return (nl);
}
