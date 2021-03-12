/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <tkathy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:12:06 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/20 09:29:09 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static int	get_word_len(char const *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	*ft_free(void **arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}

char		**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_len;
	size_t	j;
	size_t	words_no;

	if (!(s))
		return (0);
	words_no = count_words(s, c);
	if (!(result = (char**)malloc(sizeof(char*) * (words_no + 1))))
		return (0);
	j = 0;
	while (words_no--)
	{
		while (*s == c && *s != '\0')
			s++;
		word_len = get_word_len(s, c);
		if (!(result[j] = (char*)malloc((word_len + 1) * sizeof(char))))
			return (ft_free((void**)result, j));
		ft_strlcpy(result[j], s, word_len + 1);
		s += word_len;
		j++;
	}
	result[j] = 0;
	return (result);
}
