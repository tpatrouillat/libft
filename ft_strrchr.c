/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:56:58 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/09 16:44:32 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	carac;
	int		i;
	int		length;

	i = 0;
	carac = c;
	length = (int)ft_strlen(s);
	while (length - i >= 0)
	{
		if (s[length - i] == carac)
			return ((char *)&s[length - i]);
		i++;
	}
	return (NULL);
}
