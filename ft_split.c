/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:06:06 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/19 17:26:16 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count(char const *s, char c)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		nb++;
	}
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
		while (s[i + j] != 0)
			j++;
		tab[k++] = f
	}
}
