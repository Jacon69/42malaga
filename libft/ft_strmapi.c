/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 07:46:40 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/05 10:23:26 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*cad;

	size = (unsigned)ft_strlen((char *)s);
	i = 0;
	cad = (char *)ft_calloc(size + 1, sizeof(char));
	if (!cad)
		return (NULL);
	while (i < size)
	{
		cad[i] = f(i, s[i]);
		i++;
	}
	return (cad);
}
