/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:10:09 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/29 11:57:32 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			ind;

	c %= 256;
	c = (unsigned char) c;
	ptr = (unsigned char *)s;
	ind = 0;
	while (ind < n)
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
