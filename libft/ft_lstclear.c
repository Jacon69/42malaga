/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:44:39 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/12 09:34:16 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*puntero;

	if (lst == NULL)
		return ;
	if (*lst)
	{
		puntero = *lst;
		ptr = puntero-> next;
		while (puntero -> next)
		{
			del(puntero->content);
			free(puntero);
			puntero = ptr;
			ptr = puntero-> next;
		}
		del(puntero->content);
		free(puntero);
	}
	*lst = NULL;
}
