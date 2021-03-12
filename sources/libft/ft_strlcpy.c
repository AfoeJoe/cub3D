/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 00:43:36 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/15 18:42:51 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	if (!dst || !src)
		return (0);
	i = ft_strlen(src);
	if (!dstsize)
		return (i);
	while (dstsize-- > 1 && *src)
	{
		*(dst++) = *(src++);
	}
	*dst = '\0';
	return (i);
}
