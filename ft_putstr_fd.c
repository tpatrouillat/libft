/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:44:50 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/20 17:19:25 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t		len;

	if (!s)
		return ;
	len = ft_strlen((char*)s);
	if (fd != -1)
		write(fd, s, len);
}
