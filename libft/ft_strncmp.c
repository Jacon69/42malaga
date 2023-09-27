/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:54:05 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/20 18:55:36 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	while (s1[ind] && s2[ind] && (ind < n) && (s1[ind] == s2[ind]))
	{
		ind++;
	}
	if ((s1[ind] == s2[ind]) || (ind == n))
		return (0);
	if (s1[ind] > s2[ind])
		return (1);
	return (-1);
}

/* 
 main (void)
{
	char text1[1000];
	char text2[1000]; 
	size_t		n;
	int			i;

	n = 5;
	printf("Introduce la primera cadena: ");
	gets(text1);
	printf("Introduce la segunda cadena: ");
	gets(text2);
	printf("¿Cuántos caracteres deseas comparar?: ");
	scanf("%lu", &n);
	i = printf("La función original strncmp devuelve: %i.\n"
		, strncmp(text1, text2, n));
	i = printf("La función mia ft_strncmp devuelve: %i.\n"
		, ft_strncmp(text1, text2, n));
	return (0);
}
*/
