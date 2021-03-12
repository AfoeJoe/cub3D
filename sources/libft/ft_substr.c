/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:36:46 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/15 19:35:22 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char *new_string;
	char *beg;

	if (!s)
		return (NULL);
	if ((new_string = malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (start && *s)
	{
		start--;
		s++;
	}
	beg = new_string;
	while (*s && len--)
	{
		*new_string++ = *s++;
	}
	*new_string = '\0';
	return (beg);
}
