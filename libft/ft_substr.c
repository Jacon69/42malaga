/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 05:44:11 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/02 20:25:14 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lng;
	char	*substr;

	lng = 1;
	if ((start > (unsigned int) ft_strlen((char *)s)) || (\
	len == 0) || !(*s))
	{
		substr = (char *)malloc(sizeof(char const));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	lng = ft_strlen((char *)&s[start]);
	if (lng + 1 > len)
		lng = len ;
	substr = (char *)ft_calloc((lng + 1), sizeof(char));
	if (!substr)
		return ((void *) 0);
	ft_memmove(substr, &s[start], lng);
	return (substr);
}

/*
	//if (start == 0)
	//	return ((void *)0);
lng los caracteres desde el punto indicado al final es 
en principio nº de caracteres sin \0 lo comparo con 
len  que si incluye \0 por lo que le sumo 1, Len es
 lo max que puede medir la subcadena
Si esto es mayor que len que es el tamaño max de lo 
que puedo meter en la subcadena reservo len +1
Si no es que la cadena original desde el punto indicado 
es mas pequeño igual que len por lo que tengo
 que reservar es lo que mide que es lng +1
*/
/*int main (void)
{
	char *text= "Jaime es de Burgos";
	char *substr;
	
	substr = ft_substr(text, 0, 5);
	printf("Esta es la cadena original: %s \n", text);
	printf("Esta es la subcadena:  %s \n", substr);
	free(substr);
	return 0;
}*/
