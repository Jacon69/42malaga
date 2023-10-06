/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 06:01:16 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/05 07:43:23 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_abs_num(int num)
{
	if (num < 0)
		return (-1 * num);
	return (num);
}

int static	ft_lng(int n)
{
	int	cnt;

	cnt = 0;
	while (n != 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

void static	wr_num(char *num, int pos, int sig, int n)
{
	while (pos >= 0)
	{
		if ((sig == -1) && (pos == 0))
		{
			num[0] = 45;
			break ;
		}
		num[pos] = (48 + ft_abs_num(n % 10));
		n /= 10;
		pos--;
	}
}

char	*ft_itoa(int n)
{
	int		cnt;
	char	*num;
	int		i;
	int		sig;

	if (n == 0)
		cnt = 1;
	else
	{	
		cnt = ft_lng(n);
		if (n < 0)
			cnt++;
	}
	num = (char *)ft_calloc(cnt + 1, sizeof(char));
	if (!num)
		return (NULL);
	i = cnt - 1;
	sig = 0;
	if (n < 0)
		sig = -1;
	wr_num (num, i, sig, n);
	return (num);
}

/*int	main(void)
{
	int	n;

	n = ----545410;

	printf("el numero es %s \n", ft_itoa(n));
	return (0);
}*/