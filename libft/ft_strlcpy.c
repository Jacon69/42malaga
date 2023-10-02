/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:34:21 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/29 08:39:07 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t	i;

	i = 0;
	while ((i < dstsize - 1) && !(src[i] == '\0') && (dstsize != 0))
	{
		dst[i] = src [i];
		i++;
	}
	if (!(dstsize == 0))
		dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main (void)
{
	char src[20]="Hola Mindo !!"; //origen 
	char dst[6]="aaaaa"; //Destino

//	printf("esto es lo que devuelve original %zu \n", strlcpy(dst, src,0));
	printf("esto es lo que devuelve propia  %zu \n", ft_strlcpy(dst, src,0));
    printf("%s \n", dst);
}*/
