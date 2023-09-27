/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:45:25 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/26 12:03:33 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{	
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p = 0;
		p++;
	}
}
/* int	main(int argc, char *argv[])
{
	int num;
	char c;
	c = argv[3][0];
	num = argv[3][0] - 48;
	write(1, &c, 1);
	c = '\n';
	write(1, &c, 1);
	bzero(argv[1],num);
	ft_bzero(argv[2],num);
	(void)argc;
	printf("esto es lo que devuelve la función original: %s \n",argv[1]);
	printf("esto es lo que devuelve la mi función : %s \n",argv[2]);
}*/
