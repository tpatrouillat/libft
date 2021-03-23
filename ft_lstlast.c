/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatroui <tpatroui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:18:26 by tpatroui          #+#    #+#             */
/*   Updated: 2021/03/23 17:24:04 by tpatroui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	size;

	size = ft_lstsize(lst);
	while (size)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
		size--;
	}
	return (lst);
}
