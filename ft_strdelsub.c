/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:41:21 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/02 06:40:40 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		lng;
	char	*ptr;

	ptr = ft_strnstr(s1, set, ft_strlen((char *)s1));
	if (ptr)
	{
		lng = ft_strlen((char *)s1) - ft_strlen(ptr);
		ptr = ft_strjoin(ft_substr(s1, 0, (size_t)lng)\
		, ft_strtrim(&ptr[ft_strlen((char *)set)],set));
		return (ptr);
	}
	ptr = ft_calloc(ft_strlen((char *)s1)+1, sizeof(char));
	ft_strlcpy(ptr, s1, ft_strlen((char *)s1)+1);
	return (ptr);
}

int main (void)
{
	char *larga ="qqqq123qqqq123qqqqqqq123qqqqq123qqqqqqqqqq123";
	char *elimina="123";
	char *resul = ft_strtrim(larga, elimina);

	printf("Esto es lo que queda: \n %s \n",resul);
	free(resul);
	return (0);
}