/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jconde-a <jconde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 08:53:39 by jconde-a          #+#    #+#             */
/*   Updated: 2023/10/05 05:46:54 by jconde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	cntlnk(char const *s, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (((s[i]) != c))
		{
			cnt++;
			while ((s[i]) != c)
			{
				i++;
				if (s[i] == '\0')
					return (cnt);
			}
		}
		else
			i++;
	}
	return (cnt);
}

void static	ft_fllchain(char const *s, char c, char **cad)
{
	int	n;
	int	i;
	int	p;

	p = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i]) != c)
		{
			n = 0;
			while (((s[i]) != c) && (s[i]))
			{
				cad[p][n] = s[i];
				n++;
				i++;
			}
			p++;
		}
		else
			i++;
	}
}

int	static	ft_cnt_sp_chain(char const *s, char c, int l)
{
	int	cont;
	int	i;
	int	p;

	cont = 0;
	p = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			p++;
			while (((s[i]) != c) && (s[i]))
			{
				if (p == l)
					cont++;
				i++;
			}
			if (p == l)
				return (cont);
		}
		else
			i++;
	}
	return (0);
}

int static	ft_do_spc(char const *s, char c, int nlnk, char **cad )
{
	int	lge;
	int	i;

	i = 0;
	while (i < nlnk)
	{
		lge = ft_cnt_sp_chain(s, c, i + 1);
		cad[i] = (char *)ft_calloc((lge + 1), sizeof(char));
		if (!cad[i])
		{
			lge = (nlnk + 1);
			while (lge-- > 0)
			{
				free((char *)cad[lge]);
			}	
			free((char **)cad);
			return (-1);
		}
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**cad;
	int		nlnk;
	int		i;

	nlnk = cntlnk(s, c);
	cad = (char **)malloc(sizeof(char *) * (nlnk + 1));
	if (!cad)
		return (NULL);
	if (nlnk == 0)
	{
		cad[0] = NULL;
		return (cad);
	}
	i = ft_do_spc(s, c, nlnk, cad);
	if (i == -1)
		return (NULL);
	cad[i] = NULL;
	ft_fllchain(s, c, cad);
	return (cad);
}

/*int	main (void)
{
	char	cad[]="12,545,454";
	char	sep;
	char 	**mar;
	int 	palabras;
	int		i;

	sep = ',';
	printf("nº de eslabones: %i \n", cntlnk(cad, sep));
	palabras = cntlnk(cad, sep);
	mar = ft_split(cad,sep);
	i = 0;
	while (i < palabras)
	{
		printf(" %s \n", mar[i]);
		i++;
	}
	return (0);
}*/