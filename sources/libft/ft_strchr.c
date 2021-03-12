/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 02:44:02 by tkathy            #+#    #+#             */
/*   Updated: 2020/10/31 05:15:02 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ps;

	ps = (char *)s;
	while (*ps != '\0')
	{
		if (*ps == (char)c)
			return (ps);
		ps++;
	}
	if (c == '\0')
		return (ps);
	return (0);
}
