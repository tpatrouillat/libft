/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:56:23 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/20 17:21:03 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;
	size_t				len;

	if (!s)
		return (NULL);
	len = ft_strlen((char*)s);
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	i = 0;
	str[len] = '\0';
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
