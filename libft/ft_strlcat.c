/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:39:47 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/10 11:42:40 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	i;
	size_t	tdes;

	cont = ft_strlen((const char *)dst);
	tdes = ft_strlen(src);
	if (cont > dstsize)
		tdes += dstsize ;
	else
		tdes += cont;
	i = 0;
	while ((src[i] != '\0') && ((cont +1) < dstsize) && (dstsize > 0))
	{
		dst[cont] = src[i];
		cont++;
		i++;
	}
	dst[cont] = '\0';
	return (tdes);
}

/*int main (void)
{
	char	dst[25] = "pqrstuvwxyz";
//	char	src[50] = "abcd"; //15
	//int		size;
	//size = 0;
//	printf(" La función original devuelve \n %zu \n %s \n."
, strlcat(dst, "abcd", 20), dst);
	printf(" La función propia devuelve \n %zu \n %s \n."
	, ft_strlcat(dst, "abcd", 20), dst);
}*/
