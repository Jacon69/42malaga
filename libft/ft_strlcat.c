/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:39:47 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/29 10:23:19 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	int		i;
	size_t	tdes;

	cont = ft_strlen(dst);
	tdes = ft_strlen((char *) src);
	if (cont > dstsize)
		tdes += dstsize;
	else
		tdes += cont;
	i = 0;
	while ((*src != '\0') && (cont < dstsize - 1) && (dstsize != 0))
	{
		dst [cont] = src[i];
		cont++;
		i++;
	}
	while (cont < dstsize)
	{
		dst [cont] = '\0';
		cont++;
	}
	return (tdes);
}
/*int main (void)
{
	char	dst[15] = "";
//	char	src[50] = "123456789012345"; //15
	//int		size;
	//size = 0;
//	printf(" La funci,ón original devuelve \n %zu \n %s \n.",
 strlcat(dst, "loren", 15), dst);
	printf(" La función propia devuelve \n %zu \n %s \n.",
	 ft_strlcat(dst, "loren", 15), dst);
}*/