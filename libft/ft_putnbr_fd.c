/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:23:16 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/05 12:34:53 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_long(int nb)
{
	int	l;

	l = 1;
	while (nb / 10 != 0)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	l;
	int	n;
	int	r;
	int	i;
	int	h;

	l = ft_long(nb);
	if (nb < 0)
		ft_putchar_fd('-', fd);
	i = 1;
	while (i <= l)
	{
		n = nb;
		h = 1;
		while (l - i + 1 >= h)
		{
			r = n % 10;
			if (r < 0)
				r *= -1;
			n /= 10;
			h++;
		}
		i++;
		ft_putchar_fd(r + '0', fd);
	}
}
