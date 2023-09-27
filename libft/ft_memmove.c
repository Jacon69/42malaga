/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:02:50 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/18 20:31:48 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr1;
	char	*ptr2;
	size_t	cont;

	ptr1 = (char *)src;
	ptr2 = (char *)dst;
	cont = 1;
	while (cont < len)
	{
		ptr2++;
		ptr1++;
		cont++;
	}
	while (0 < cont)
	{
	*ptr2 = *ptr1;
		ptr2--;
		ptr1--;
		cont--;
	}
	return (dst);
}

/*int	main(void)
{
	int num;
	char src[25] = "Hola-Jaime-Sevilla";
	char *dst;

	dst = src;
	dst += 5;
	num = 10;
    printf("esto es lo que devuelve la función original:%s \n"
	, memmove(dst,src,num));
//	printf("esto es lo que devuelve la mi función :	%s \n"
//	,ft_memmove(dst,src,num));
}*/
