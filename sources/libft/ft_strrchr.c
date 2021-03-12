/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 03:02:28 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/03 19:06:37 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ps;

	i = ft_strlen(s);
	ps = (char *)s;
	while (i && ps[i] != c)
		i--;
	if (ps[i] == (char)c)
		return (&ps[i]);
	return (NULL);
}
