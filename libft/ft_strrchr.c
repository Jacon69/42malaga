/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:18:40 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/20 18:49:54 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		aux;

	p = (char *)s;
	aux = 0;
	while (*p != '\0')
		p++;
	p--;
	while ((p > (s - 1)) && (aux == 0))
	{
		if (*p == c)
			aux = 1;
		p--;
	}
	if (aux == 1)
	{
		p++;
		return (p);
	}
	return (NULL);
}
/* int main (int argc, char *argv[])
{
	(void)argc;
	printf("Esta es la función original %s \n", strrchr(argv[1],argv[2][0]));
	printf("Esta es la función propia %s \n", ft_strrchr(argv[1],argv[2][0]));
}*/
/* int main (void)
{
	char str[15]="Hola Muando!!";
	int c;
	
	c = 'a';
	printf("Esta es la función original %s \n", strrchr(str,c));
	printf("Esta es la función propia %s \n", ft_strrchr(str,c));
} */