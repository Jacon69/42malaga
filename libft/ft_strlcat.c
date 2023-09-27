/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:39:47 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/20 16:20:22 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;

	cont = 0;
	while (*dst != '\0')
	{
		cont++;
		dst++;
	}
	while ((*src != '\0') && (cont < dstsize - 1))
	{
		*dst = *src;
		cont++;
		src++;
		dst++;
	}
	*dst = '\0';
	while (*src != '\0')
	{
		cont++;
		src++;
	}
	return (cont);
}
/*
int main (void)
{
	char	dst[35] = "Hola Mundo";
	char	src[50] = " y a jaime pero no  me puedo esperar a verlo";
	int		size;
	size = 35;
//	printf(" La función original devuelve \n %zu \n %s
//	\n.", strlcat(dst, src, size), dst);
	printf(" La función propia devuelve \n %zu \n %s \n.",
	ft_strlcat(dst, src, size), dst);
}*/
