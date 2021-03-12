/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:06:02 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/16 18:35:30 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	s;
	size_t			i;
	char			*begin;

	i = 0;
	begin = b;
	s = (unsigned char)c;
	while (i++ < len)
	{
		*begin = s;
		begin++;
	}
	return (b);
}
