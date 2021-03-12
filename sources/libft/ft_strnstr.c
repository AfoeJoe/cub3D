/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 03:03:18 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/03 20:57:50 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*(haystack) && len-- >= i)
	{
		if (ft_strncmp(haystack, needle, i) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
