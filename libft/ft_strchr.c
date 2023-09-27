/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:18:40 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/18 20:52:43 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (0);
}
/* int main (void)
{
	char str[20]="Hola Mindo !!";
	int c;

	c = 'f';
	printf("esto es lo que devuelve original %s \n", strchr(str, c));
    printf("esto es lo que devuelve propia  %s \n", ft_strchr(str, c));
}*/
