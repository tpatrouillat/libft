/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:57:13 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/20 17:26:10 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	i = 0;
	if (!(str = (char *)malloc((len + 1) * sizeof(*str))))
		return (NULL);
	while (i < len)
	{
		str[i] = (char)s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
