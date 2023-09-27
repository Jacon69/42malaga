/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:28:04 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/17 09:13:57 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*per;

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
/* int	main(int argc, char *argv[])
{
	int num;
	
	num = argv[3][0] - 48;
	(void)argc;
	// printf("esto es lo que devuelve la función original:
	 %s \n",memcpy(argv[1],argv[2],num));
	printf("esto es lo que devuelve la mi función :
	 %s \n",ft_memcpy(argv[1],argv[2],num));
}*/
