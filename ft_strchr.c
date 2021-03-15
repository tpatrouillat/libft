/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:45:00 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/09 16:45:50 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			carac;
	unsigned long	i;

	i = 0;
	carac = c;
	while (i < (ft_strlen(s) + 1))
	{
		if (carac == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
