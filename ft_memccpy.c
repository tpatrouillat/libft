/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:43:32 by tpatroui          #+#    #+#             */
/*   Updated: 2021/02/23 01:10:17 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned char		*sourc;
	size_t				i;

	if (!src && !dst)
		return (NULL);
	i = 0;
	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = sourc[i];
		if (sourc[i] == (unsigned char)c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
