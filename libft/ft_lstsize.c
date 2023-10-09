/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:44:39 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/09 14:02:06 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	if (lst == NULL)
		return (0);
	cont = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		cont++;
	}
	return (cont);
}

/*
int	main(void)
{
	int c;
	
	t_list	*elem =  ft_lstnew((void *)NULL);
	t_list	*elem2 = ft_lstnew((void *)NULL);
	t_list	*elem3 = ft_lstnew((void *)NULL);
	t_list	*elem4 = ft_lstnew((void *)NULL);
	
	elem->next = elem2;
    elem2->next = elem3;
    elem3->next = elem4;
    c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
    elem->next = NULL;
    c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
    elem = NULL;
    c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}*/