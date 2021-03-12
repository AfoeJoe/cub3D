/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 03:18:32 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/13 20:24:42 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	len;
	char	*beg;

	len = ft_strlen(s1);
	if ((cpy = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	beg = cpy;
	while (len-- > 0)
	{
		*(cpy++) = *(s1++);
	}
	*cpy = '\0';
	return (beg);
}
