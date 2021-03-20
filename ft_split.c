/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:06:06 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/20 16:55:06 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_ndup(char const *s, int n)
{
	char	*tab;
	int		i;

	i = 0;
	if (s == '\0')
		return (NULL);
	if (!(tab = (char *)malloc((n + 1) * sizeof(char *))))
		return (NULL);
	while (s[i] && i < n)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int		count(char const *s, char c)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
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
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j > 0)
			tab[k++] = ft_ndup(&s[i], j);
		i += j;
	}
	tab[k] = NULL;
	return (tab);
}

int	main(int argc, char const *argv[])
{
	char	**string;
	int		i;

	argc = 0;
	string = ft_split(argv[1], argv[2][0]);
	i = -1;
	while (string[++i])
	printf("%s\n", string[i]);
	return (0);
}
