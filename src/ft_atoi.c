/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:08:00 by mhahn             #+#    #+#             */
/*   Updated: 2021/06/22 15:39:05 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c <= 13 && c >= 9) || c == 32);
}

static int	ft_iarti(char digits[10], int c)
{
	int	counter;
	int	power;
	int	result;

	counter = c - 1;
	power = 1;
	result = 0;
	while (counter >= 0)
	{
		result += (digits[counter] * power);
		power *= 10;
		counter--;
	}
	return (result);
}

static void	check_sign(const char *c, int *sign, int *counter)
{
	if (*c == '-')
	{
		*sign = -1;
		*counter = *counter + 1;
	}
	else if (*c == '+')
	{
		*sign = 1;
		*counter = *counter + 1;
	}
	else
		*sign = 1;
}

int	ft_atoi(const char *str)
{
	int		counter;
	int		sign;
	int		dc;
	char	digits[10];

	counter = 0;
	while (ft_isspace(str[counter]))
		counter++;
	check_sign(&str[counter], &sign, &counter);
	dc = 0;
	while (ft_isdigit(str[counter]))
	{
		if (dc > 9)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		digits[dc] = str[counter] - '0';
		dc++;
		counter++;
	}
	return (ft_iarti(digits, dc) * sign);
}
