/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:44:13 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/09 15:55:56 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s1;
	unsigned char		*s2;
	int					i;

	s1 = dst;
	s2 = (unsigned char*)src;
	i = len;
	if (!dst && !src)
		return (NULL);
	if (src == dst)
		return (dst);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
		while (--i >= 0)
			s1[i] = s2[i];
	return (dst);
}
