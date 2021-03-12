/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:47:04 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/13 18:26:35 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *head;

	head = NULL;
	if ((head = (t_list *)malloc(sizeof(t_list))) == 0)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
