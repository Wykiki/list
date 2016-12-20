/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 14:00:21 by jle-mene          #+#    #+#             */
/*   Updated: 2016/12/20 14:02:55 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

size_t	lst_size(t_node *lst)
{
	size_t	size;

	size = 0;
	while (lst != NULL  && lst->prev != NULL)
		lst = lst->prev;
	while (lst != NULL)
	{
		++size;
		lst = lst->next;
	}
	return (size);
}
