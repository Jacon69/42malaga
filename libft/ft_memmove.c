/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:02:50 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/10 09:29:03 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void static	ft_1memmov(char *src, char *dst, size_t len)
{
	size_t	cont;	

	cont = 0;
	while (cont++ < len)
	{			
		*dst = *src;
		dst++;
		src++;
	}		
}

void static	ft_2memmov(char *src, char *dst, size_t len)
{
	size_t	cont;	

	cont = 0;
	dst += (len - 1);
	src += (len - 1);
	while (cont++ < len)
	{
		*dst = *src;
		dst--;
		src--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr1;
	char	*ptr2;
	size_t	cont;

	if (src == dst)
		return (dst);
	ptr1 = (char *)src;
	ptr2 = (char *)dst;
	cont = 0;
	if (ptr1 > ptr2)
		ft_1memmov(ptr1, ptr2, len);
	else
		ft_2memmov(ptr1, ptr2, len);
	return (dst);
}

/*
int	main(void)
{
	int num;
//	char src[100] = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	char src[100] =  "123456789123456789";
//	char dst[25] ;
	
	//dst = src;
	//dst += 3;
	num = 7;
//	printf("esto es lo que devuelve la función original:%s \n",
 memmove(&src[0],&src[5],num));
	printf("esto es lo que devuelve         mi función :%s \n", 
	ft_memmove(&src[0],&src[5],num));
}*/
