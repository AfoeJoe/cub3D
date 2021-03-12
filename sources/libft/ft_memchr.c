/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:41:41 by tkathy            #+#    #+#             */
/*   Updated: 2020/10/29 21:57:09 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *ps;

	ps = s;
	c = (unsigned char)c;
	while (n--)
	{
		if ((unsigned char)*ps == c)
			return ((char *)ps);
		ps++;
		s++;
	}
	return (NULL);
}
