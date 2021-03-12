/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 19:43:21 by tkathy            #+#    #+#             */
/*   Updated: 2021/03/07 17:42:04 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static char		*ft_s_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*beg;
	size_t	len1;
	size_t	len2;
	char	*p_s1;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if ((new_str = malloc(sizeof(char) * (len1 + len2) + 1)) == NULL)
		return (NULL);
	beg = new_str;
	p_s1 = (char *)s1;
	while (*s1)
		*new_str++ = *s1++;
	free(p_s1);
	while (*s2)
		*new_str++ = *s2++;
	*new_str = '\0';
	return (beg);
}

static char *check_remainder(char **remainder, char **line)
{
	char *p_n;

	p_n = NULL;
	if (*remainder)
	{
		if ((p_n = ft_strchr(*remainder, '\n')))
		{
			*p_n = '\0';
			*line = *remainder;
			++p_n;
			*remainder = ft_strdup(p_n);
		}
		else
		{
			*line = *remainder;
			*remainder = NULL;
		}
	}
	else
		*line = ft_strdup("");
	return (p_n);
}

int get_next_line(int fd, char **line)
{
	char buf[BUFFER_SIZE + 1];
	int byte_read;
	char *p_n;
	static char *remainder;

	if ((fd < 0 || !line || (BUFFER_SIZE <= 0) || (read(fd, buf, 0) == -1)))
		return (-1);
	p_n = check_remainder(&remainder, line);
	while (!p_n && (byte_read = read(fd, buf, BUFFER_SIZE)))
	{
		buf[byte_read] = '\0';
		if ((p_n = ft_strchr(buf, '\n')))
		{
			*p_n = '\0';
			if (!(remainder = ft_strdup(++p_n)))
				return (-1);
		}
		if (!(*line = ft_s_strjoin(*line, buf)))
			return (-1);
	}
	return ((byte_read || p_n) ? 1 : 0);
}