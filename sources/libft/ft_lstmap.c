/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkathy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:48:19 by tkathy            #+#    #+#             */
/*   Updated: 2020/11/13 19:35:58 by tkathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *ret;

	if (!lst || !f)
		return (NULL);
	if ((new = ft_lstnew(f(lst->content))) == NULL)
	{
		return (NULL);
	}
	ret = new;
	lst = lst->next;
	while (lst)
	{
		if ((new = ft_lstnew(f(lst->content))) == NULL)
		{
			ft_lstclear(&ret, del);
			break ;
		}
		ft_lstadd_back(&ret, new);
		lst = lst->next;
	}
	return (ret);
}
