/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:09:47 by mhahn             #+#    #+#             */
/*   Updated: 2021/08/11 17:34:12 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(int n)
{
	int	count;

	count = 0;
	while (n / 10 != n)
	{
		n = n / 10;
		count++;
	}
	if (count == 0)
		count = 1;
	return (count);
}

static void	convert(long *ln, char *str, int *ctr, int *dc)
{
	*ctr = *ctr - 1;
	str[*ctr] = '\0';
	while (*dc > 0)
	{
		if (*ln < 0)
			str[*ctr - 1] = (((*ln * -1) % 10) + '0');
		else
			str[*ctr - 1] = ((*ln % 10) + '0');
		*ln = *ln / 10;
		*ctr = *ctr - 1;
		*dc = *dc - 1;
	}
	if (*ctr > 0)
		str[*ctr - 1] = '-';
}

char	*ft_itoa(int n)
{
	int		dc;
	int		counter;
	char	*str;
	long	ln;

	ln = n;
	dc = count_digits(n);
	counter = dc + 1;
	if (ln < 0)
		counter += 1;
	str = malloc(counter);
	if (str != NULL)
		convert(&ln, str, &counter, &dc);
	return (str);
}
