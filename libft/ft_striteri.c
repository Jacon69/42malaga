/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:27:52 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/05 10:47:16 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	size;
	unsigned int	ind;

	size = (unsigned)ft_strlen((char *)s);
	ind = 0;
	while (ind < size)
	{
		f(ind, &s[ind]);
		ind++;
	}
}
