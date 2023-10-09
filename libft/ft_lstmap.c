/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:44:39 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/06 09:45:41 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content))
void    ft_lstadd_back(t_list **lst, t_list *new)


#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
{
	t_list	*nwlst;
	t_list	*ptrlst;
	t_list	*prim;
	
	nwlst = ftlstnew(f(lst->content));
	prim = nwlst;
	ptrlst = lst->next;
	while (ptrlst)
	{
		nwlst->next = ftlstnew(f(ptrlst->content));
		nwlst = *nwlst->next;
		lst = ptrlst;
		ptrlst = lst-> next;
	}
return (prim)
}