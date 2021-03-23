/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:06:06 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/23 17:11:39 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static char		**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

int				ft_count(char const *s, char c)
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

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;
	int		wlen;
	int		j;

	if (s == NULL)
		return (NULL);
	count = ft_count(s, c);
	if (!(tab = (char **)malloc((count + 1) * sizeof(char *))))
		return (NULL);
	j = 0;
	while (count--)
	{
		while (*s == c && *s)
			s++;
		wlen = ft_wordlen(s, c);
		if (!(tab[j] = (char*)malloc(sizeof(char) * wlen + 1)))
			return (ft_free(tab));
		ft_strlcpy(tab[j], s, wlen + 1);
		j++;
		s += wlen;
	}
	tab[j] = NULL;
	return (tab);
}
