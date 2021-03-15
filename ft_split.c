/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:44:56 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/15 16:10:11 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(char const *src, int n)
{
	int		i;
	char	*dup;

	if (!(dup = (char *)malloc((n + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (i < n)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int		sep(char c, char *charset)
{
	int i;

	i = 0;
	if (c == '\0')
		return (1);
	while (charset[i])
	{
		if (c == (charset[i]))
			return (1);
		i++;
	}
	return (0);
}

int		count(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c)
			nb++;
		i++;
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!(tab = (char **)malloc((count(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] == c)
			i++;
		while (!(s[i + j] != c))
			j++;
		if (j > 0)
		{
			tab[k++] = ft_strndup(&s[i], j);
			i += j;
		}
	}
	tab[k] = 0;
	return (tab);
}
