/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:37:25 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/29 12:04:39 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*p1;
	unsigned char	*p2;
	int				v;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	v = 0;
	count = 0;
	while ((count < n) && (v == 0))
	{
		v = p1[count] - p2[count];
		count++;
	}
	return (v);
}
/* int main (int argc, char **argv)
{
	//int i;

	//i=
	(void)argc;
	printf("Este es el resultado original
	%d,\n", memcmp(argv[1], argv[2], 10));
	printf("Este es el resultado nuevo
	%d,\n", ft_memcmp(argv[1], argv[2], 10));
}*/
