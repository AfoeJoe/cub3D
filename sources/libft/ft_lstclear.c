/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:17:40 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/17 18:06:15 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void
*))
{
	t_list *temp;

	if (lst != NULL)
	{
		while (*lst)
		{
			temp = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(temp, del);
		}
	}
	*lst = NULL;
}
