/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:32:58 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/02 20:23:46 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if ((ft_strlen((char *) s1) + ft_strlen((char *)s2)) == 0)
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return ((void *)0);
		*str = '\0';
		return (str);
	}
	str = (char *)ft_calloc((1 + ft_strlen((char *) s1) + ft_strlen((char \
	*)s2)), sizeof(char));
	if (!str)
		return ((void *) 0);
	ft_strlcpy(str, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(str, s2, ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	return (str);
}

/*int main (void)
{
	char	*str1 = "where is my";
	char	*str2 = "malloc ???";
	char	*ptr;

	ptr = ft_strjoin(str1, str2);
	free(ptr);
	printf("esta es la cadena resultado %s \n", ptr);
	return 0;	
}*/
