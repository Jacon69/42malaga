/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:10:09 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/20 19:03:55 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	size_t	ind;

	ptr = (char *)s;
	ind = 0;
	while ((ind < n) && (*ptr))
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
		ind++;
	}
	return (0);
}
/*
int main (void)
{
	char *array="Hola Mundo";
//	char texto[25];
//	char textp[25];
	int c;
	int n;
	char *respo;
	char *respp;

	c = 'o';
	n = 20;
	respp = ft_memchr(array, c, n);
	respo = memchr(array, c, n);
	printf("Esto es donde apunta la
	funcion original; %s. \n", respo);
	printf("Esto es donde apunta la
	funcion nueva; %s. \n", respp);
}*/
