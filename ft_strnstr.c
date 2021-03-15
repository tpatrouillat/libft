/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 20:01:28 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/09 16:10:38 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned long	i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	if (!(to_find[i]))
		return ((char *)str);
	while (to_find[k])
		k++;
	while (str[i] && i < n)
	{
		if (str[i] == to_find[j] && j <= k)
		{
			j++;
			if (j == k)
				return ((char *)(&str[i - j + 1]));
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
