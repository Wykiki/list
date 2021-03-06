/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-mene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 12:10:43 by jle-mene          #+#    #+#             */
/*   Updated: 2016/12/23 16:03:10 by jle-mene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdlib.h>

typedef struct	s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	void			*self;
}				t_node;

t_node			*lst_new(t_node *(*init)(t_node));
void			lst_del(t_node **lst, void (*del)(void *));
size_t			lst_size(t_node *lst);

void			lst_append(t_node *lst, t_node *elem);
void			lst_prepend(t_node *lst, t_node *elem);
void			*lst_prev(t_node *lst);
void			*lst_next(t_node *lst);
t_node			*lst_head(t_node *lst);
t_node			*lst_tail(t_node *lst);

void			lst_swap(t_node *lhs, t_node *rhs);
void			lst_for_each(t_node *lst, void (*func)(void *));

#endif
