/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 06:55:00 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/21 10:26:53 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	cont;
	size_t	ind;
	char	*ptr;

	cont = ft_strlen((char *)s1);
	ind = 0;
	ptr = (void *)malloc(cont * sizeof(char));
	if (ptr)
	{
		while (ind < cont)
		{
			ptr[ind] = s1[ind];
			ind++;
		}
	}
	return (ptr);
}
/*
int main(void)
{
	char	*texto = "mi prueba";
	
	printf(" este es el resutado propio: %s \n",ft_strdup(texto));
    printf(" este es el resutado original: %s \n",strdup(texto));
	return 0;
}*/