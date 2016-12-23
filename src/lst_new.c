/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 13:40:40 by jle-mene          #+#    #+#             */
/*   Updated: 2016/12/23 09:18:35 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_node	*lst_new(t_node *(*init)(t_node))
{
	t_node	lst;

	lst.prev = NULL;
	lst.next = NULL;
	lst.self = NULL;
	return (init(lst));
}
