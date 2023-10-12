/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:39:57 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/12 09:37:50 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	size_t	aux;
	size_t	longneed;

	aux = 0;
	longneed = ft_strlen((char *)needle);
	ft_strlen((char *)haystack);
	ptr = (char *)haystack;
	if (longneed == 0)
		return (ptr);
	if (len < longneed)
		return (0);
	while (*ptr && (aux < (len - longneed + 1)))
	{
		if (ft_strncmp(ptr, needle, longneed) == 0)
			return (ptr);
		aux++;
		ptr++;
	}
	return (0);
}

/*int main(void)
{
	int n;
	//char stack[100] ="";
	
	n = 3;
	//printf("parámetros: \n %s \n %s \n %d \n", argv[1], argv[2], n);
	//printf("Este es el resultado original: %s. \n", strnstr(NULL, NULL, 15));
//	printf("Este es el resultado mio: %s. \n", ft_strnstr(NULL, NULL, 15));
	printf("Este es el resultado mio: %s. \n", ft_strnstr( (void *)0, "a", 3));
	
	return (0);
}*/
