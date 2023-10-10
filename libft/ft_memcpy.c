/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:28:04 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/10 11:49:50 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*per;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	ptr = (unsigned char *)dst;
	per = (unsigned char *)src;
	while (n--)
	{
		*ptr = *per;
		ptr++;
		per++;
	}
	return (dst);
}	
/* int	main(void)
{
	char *orig = NULL;
	char *copia =NULL;
	int num;
	
	num = 30;

//	printf("esto es lo que devuelve la función original: %s
 \n",(char *)memcpy(copia,orig,num));
	printf("esto es lo que devuelve la mi función : %s
	 \n",(char *)ft_memcpy(copia,orig,num));
}*/
