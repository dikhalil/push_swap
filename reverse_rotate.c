/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:08:19 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/13 20:58:21 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static void rr_no_print(t_list **s)
{
    t_list *last;
    t_list *prev;

    prev = ft_lstlastprev(*s);
    last = prev->next;
    prev->next = NULL;
    ft_lstadd_front(s, last);
}

void rra(t_list **a)
{
    if (!a || !*a || !(*a)->next)
        return ;
    rr_no_print(a);
    ft_putendl_fd("rra", 1);
}

void rrb(t_list **b)
{
    if (!b || !*b || !(*b)->next)
        return ;
    rr_no_print(b);
    ft_putendl_fd("rrb", 1);
}

void rrr(t_list **a, t_list **b)
{
    if (!a || !b|| !*a || !*b || !(*a)->next || !(*b)->next)
        return ;
    rr_no_print(a);
    rr_no_print(b);
    ft_putendl_fd("rrr", 1);
}

