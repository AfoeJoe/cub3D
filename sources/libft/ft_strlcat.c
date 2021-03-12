/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:46:56 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/09 20:51:25 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t dstlen;
	size_t count;

	count = dstsize;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen || dstsize == 0)
		return (srclen + dstsize);
	while (*dst && count--)
		dst++;
	while (*src && count > 1 && count--)
	{
		*(dst++) = *(src++);
	}
	if (count)
		*dst = '\0';
	return (dstlen + srclen);
}
