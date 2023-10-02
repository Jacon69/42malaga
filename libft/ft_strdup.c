/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:18:57 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/01 05:31:05 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen((char *)s1);
	if (!len)
	{	
		ptr = (char *)malloc(sizeof(char));
		if (!ptr)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	ptr = (char *)ft_calloc((len + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, len);
	return (ptr);
}

/*int main(void)
{
	char	*texto = "ljnlknñlkmn";

	texto = ft_strdup(texto);
	printf(" este es el resutado Propio: %s .\n",ft_strdup(texto));
	free(texto);
    //printf(" este es el resutado Original: %s .\n",strdup(texto));
	//free(texto);
	return (0);
}*/
