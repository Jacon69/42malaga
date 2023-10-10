/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:27:15 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/10 09:14:14 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			cont;
	unsigned char	*p;

	cont = 0;
	p = (unsigned char *)ptr;
	while (cont < num)
	{
		p[cont] = value;
		cont++;
	}
	return (ptr);
}

/* int	main(int argc, char *argv[])
{
	int num;
	
	num = argv[3][0] - 48;
	(void)argc;
	printf("esto es lo que devuelve la función original:
	 %s \n",memset(argv[1],argv[2][0],num));
	printf("esto es lo que devuelve la mi función : 
	%s \n",ft_memset(argv[1],argv[2][0],num));
}*/
