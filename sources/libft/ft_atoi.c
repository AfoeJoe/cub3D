/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 03:06:54 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/15 19:20:55 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ftt_process(const char *str, int isneg)
{
	unsigned long long	num;
	int					i;

	num = 0;
	i = 0;
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + (*str - '0');
		str++;
		i++;
	}
	if (i > 19 || num >= 9223372036854775808ULL)
		return (isneg == 1) ? -1 : 0;
	return (isneg * num);
}

int			ft_atoi(const char *str)
{
	int isneg;

	isneg = 1;
	while ((*str >= 8 && *str <= 13) || *str == ' ')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isneg = -1;
		str++;
	}
	return (ftt_process(str, isneg));
}
