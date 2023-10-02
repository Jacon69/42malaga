/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:18:40 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/29 11:58:19 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	c %= 256;
	p = (char *)s;
	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (c == '\0')
		return (p);
	return (0);
}
/* int main (void)
{
	char str[20]="teste";
	int c;

	c = 'f';
//	printf("esto es lo que devuelve original %s \n", strchr(str, 'e' + 256));
    printf("esto es lo que devuelve propia  %s \n", ft_strchr(str, 'e' + 256 ));
}*/