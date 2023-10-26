/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 06:53:35 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/26 14:06:26 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_ltrim(char const *s1, char const *set)
{
	int		i;

	i = 1;
	while ((ft_strchr(set, *s1)) && (*s1 != '\0'))
	{
		s1++;
		i++;
	}
	if (*s1 == '\0')
		return (0);
	return (i);
}

static	int	ft_rtrim(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen((char *) s1) - 1;
	while (ft_strrchr(set, s1[i]) && (i > 0))
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str ;
	char	*str2 ;
	int		i;

	i = ft_ltrim(s1, set);
	if (i == 0)
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return ((void *)0);
		*str = '\0';
		return (str);
	}
	str = (char *)&s1[i - 1];
	i = ft_rtrim(s1, set) + 1;
	i = ft_strlen(str) - (ft_strlen((char *)s1) - i);
	str2 = ft_calloc(i + 1, sizeof(char));
	if (!str2)
		return ((void *) 0);
	ft_strlcpy(str2, str, i + 1);
	return (str2);
}
/* int main (void)
{
	char	*cadena = "12121212a" ;
	char	*borrar = "12"  ;
	char	*res;
	// "   \t  \n\n \t\t  \n\n\nHello \t  Please\n 
	Trim me !\n   \n \n \t\t\n  ";
	//" \n\t";
	res = ft_strtrim(cadena, borrar);
	printf("Este es el resultado: %s \n", res);
	free(res);
	return (0);
} */