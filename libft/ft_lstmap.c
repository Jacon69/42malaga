/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:44:39 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/09 18:56:10 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//t_list	*ft_lstnew(void *content)
// void    ft_lstadd_back(t_list **lst, t_list *new)
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nwlst;
	t_list	*ptrlst;
	t_list	*prim;

	if ((lst == NULL) || (f == NULL))
		return (NULL);
	nwlst = ft_lstnew(f(lst->content));
	if (!nwlst)
		return (NULL);
	prim = nwlst;
	ptrlst = lst->next;
	while (ptrlst)
	{
		nwlst->next = ft_lstnew(f(ptrlst->content));
		if (!nwlst)
		{
			ft_lstclear(&prim, del);
			return (NULL);
		}
		nwlst = nwlst->next;
		ptrlst = ptrlst->next;
	}
	return (prim);
}
