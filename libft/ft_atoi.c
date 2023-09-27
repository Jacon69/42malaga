/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 08:40:39 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/26 12:03:26 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toffsp(char *str)
{
	while (((*str > 8) && (*str < 14)) || (*str == 32))
	{
		str++;
	}
	return (str);
}

int	ft_atoi( const char *str)
{
	char	*ptr;
	int		val;
	int		sig;

	ptr = ft_toffsp((char *)str);
	sig = 1;
	val = 0;
	if (*ptr == '-')
	{
		sig = -1;
		ptr++;
	}
	else if (*ptr == '+')
		ptr++;
	while ((*ptr > 47) && (*ptr < 58))
	{
		val *= 10;
		val += (*ptr - 48);
		ptr++;
	}
	val *= sig;
	return (val);
}

/*int main ( int argc, char *argv[] )
{
	(void)argc;
	printf("Este es el nº de atoi original %i \n", atoi(argv[1]));
	printf("Este es el nº de mi atoi %i \n", ft_atoi(argv[1]));
}*/
