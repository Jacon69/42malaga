/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:39:57 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/20 19:27:20 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	size_t	aux1;
	size_t	aux2;
	size_t	aux3;

	aux1 = 0;
	ptr = (char *)haystack;
	while (haystack[aux1] && (len > aux1))
	{
		aux2 = 0;
		aux3 = aux1;
		while (needle[aux2] && (len > aux3)
			&& (haystack[aux3] == needle[aux2]) && (haystack[aux3]))
		{
			aux2++;
			aux3++;
		}
		if (!needle[aux2])
			return (ptr);
		aux1++;
		ptr++;
	}
	return (0);
}

/*int main(int argc,char *argv[]) //Meter 3 param 
 * Cadena en la que se busca, lo que se busca y un número
{
	int n;
	(void)argc;
	
	n = atoi(argv[3]);
	printf("parámetros: \n %s \n %s \n %d \n", argv[1], argv[2], n);
	printf("Este es el resultado original: %s. \n", strnstr(argv[1], argv[2], n));
	printf("Este es el resultado mio: %s. \n", ft_strnstr(argv[1], argv[2], n));
}*/
