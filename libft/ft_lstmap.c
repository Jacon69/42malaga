/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:44:39 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/12 09:30:59 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_run_lst(t_list *nwlst, t_list *lst, void *(*f)(void *), \
	void (*del)(void *), t_list *prim)
{
	void	*val;

	while (lst)
	{
		val = f(lst->content);
		nwlst->next = ft_lstnew(val);
		if (nwlst->next == NULL)
		{
			ft_lstclear(&prim, del);
			del (val);
			return (0);
		}
		nwlst = nwlst->next;
		lst = lst->next;
	}
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nwlst;
	t_list	*prim;
	void	*val;
	int		ok;

	if ((lst == NULL) || (f == NULL))
		return (NULL);
	val = f(lst->content);
	nwlst = ft_lstnew(val);
	if (!nwlst)
	{
		del (val);
		return (NULL);
	}
	prim = nwlst;
	ok = ft_run_lst(nwlst, lst->next, f, del, prim);
	if (!ok)
		return (NULL);
	return (prim);
}
