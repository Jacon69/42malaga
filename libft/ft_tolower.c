/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:46:36 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/20 16:51:44 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if ((c > 64) && (c < 91))
		c += 32;
	return (c);
}
/*int main(int argc, char *argv[])
{
	(void) argc;
//	argv[1][0] = tolower(argv[1][0]);
	argv[1][0] = ft_tolower(argv[1][0]);
	write(1, argv[1],1);
}*/
