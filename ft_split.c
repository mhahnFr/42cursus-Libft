/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:48:30 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/23 18:15:56 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	free_me(char **err, int len)
{
	int	counter;

	counter = 0;
	while (counter < len)
	{
		if (err[counter] != NULL)
			free(err[counter]);
	}
	free(err);
}

static size_t	calculate(const char *s, char c, size_t *wc)
{
	size_t	counter;

	counter = 0;
	while (s[counter] == c && s[counter] != '\0')
		counter++;
	if (s[counter] != '\0')
	{
		*wc = *wc + 1;
		while (s[counter] != c && s[counter] != '\0')
			counter++;
		*wc = calculate(s + counter, c, wc);
	}
	return (*wc);
}

static int	call_split(const char *s, char c, char **str, int *sc)
{
	size_t	counter;
	size_t	index;

	counter = 0;
	while (s[counter] == c && s[counter] != '\0')
		counter++;
	if (s[counter] != '\0')
	{
		index = counter;
		while (s[counter] != c && s[counter] != '\0')
			counter++;
		*sc = *sc + 1;
		str[*sc] = ft_substr(s, index, counter - index);
		if (str[*sc] == NULL)
		{
			free_me(str, *sc);
			return (-1);
		}
		*sc = call_split(s + counter, c, str, sc);
	}
	return (*sc);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		cs;
	int		index;
	size_t	wc;

	index = -1;
	wc = 0;
	if (s == NULL)
		return (NULL);
	str = (char **) ft_calloc(calculate(s, c, &wc) + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	cs = call_split(s, c, str, &index);
	if (cs != -1)
		str[cs + 1] = NULL;
	return (str);
}
