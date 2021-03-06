/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 00:43:21 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/23 16:45:37 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = ft_strlen(str);
	while (j > i)
	{
		j--;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
	}
	return (str);
}

int			ft_intlen(int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int nbr)
{
	int		i;
	int		neg;
	char	*tmp;

	i = 0;
	neg = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}
	if (!(tmp = ft_calloc(ft_intlen(nbr) + 1 + neg, sizeof(*tmp))))
		return (NULL);
	while (nbr)
	{
		tmp[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (neg)
		tmp[i] = '-';
	return (ft_strrev(tmp));
}
