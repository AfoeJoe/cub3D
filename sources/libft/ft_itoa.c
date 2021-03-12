/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:40:10 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/20 09:16:02 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*res;
	size_t		i;
	long long	sp;

	sp = n;
	i = 1;
	while (sp /= 10)
		i++;
	sp = n;
	if (n < 0)
	{
		sp *= -1;
		i += 1;
	}
	if (!(res = (char *)malloc((i + 1) * sizeof(char))))
		return (0);
	res[i--] = '\0';
	res[i--] = sp % 10 + '0';
	while (sp /= 10)
		res[i--] = sp % 10 + '0';
	if (n < 0)
		res[0] = '-';
	return (res);
}
