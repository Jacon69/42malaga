/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:11:07 by jconde-a          #+#    #+#             */
/*   Updated: 2023/09/17 09:03:25 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c < 48) || (c > 57))
		return (0);
	return (1);
}
/* int main (void)
{
	printf("resultado %i", isdigit (50));
	return (0) ;
} */
