/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:29:47 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/15 19:16:27 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char	*ret;
	char	*beg;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if ((ret = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)) == NULL)
		return (NULL);
	beg = ret;
	while (*s)
	{
		*(ret++) = f(i++, *s++);
	}
	*ret = '\0';
	return (beg);
}
