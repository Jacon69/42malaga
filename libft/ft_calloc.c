/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:10:02 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/21 10:24:39 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr)
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
	return (0);
}
/*int main(void)
{
	char *cad;
	cad = (char *)ft_calloc(5,1);
	printf(" este es el resutado propio: %s \n",cad);

//    printf(" este es el resutado propio: %s \n",cad);
	return (0);
}*/