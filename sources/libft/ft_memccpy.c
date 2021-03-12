/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:58:30 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/17 20:46:15 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*s3;
	const char	*s4;

	s3 = s1;
	s4 = s2;
	c = (unsigned char)c;
	while (n--)
	{
		*s3 = *s4;
		if ((unsigned char)*s4 == c)
			return (++s3);
		s3++;
		s4++;
	}
	return (0);
}
