/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:44:56 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/19 15:14:05 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

int		count(char const *s, char c)
{
	int	i;
	int	nb;

	if (s == '\0')
		return (0);
	i = 1;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
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

	if (s == NULL)
		return (NULL);
	if (!(tab = (char **)malloc((count(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		while ((s[i + j] != c))
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

int					main(int argc, char *av[])
{
	printf("%s\n", ft_split(av[1], "c"));
	return (0);
}
