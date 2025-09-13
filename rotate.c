/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:06:33 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/13 20:58:21 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static void r_no_print(t_list **s)
{
    t_list *tmp;

    tmp = *s;
    *s = (*s)->next;
    ft_lstadd_back(s, tmp);
}

void ra(t_list **a)
{
    if (!a || !*a || !(*a)->next)
        return ;
    r_no_print(a);
    ft_putendl_fd("ra", 1);
}

void rb(t_list **b)
{
    if (!b || !*b || !(*b)->next)
        return ;
    r_no_print(b);
    ft_putendl_fd("rb", 1);
}

void rr(t_list **a, t_list **b)
{
    if (!a || !b|| !*a || !*b || !(*a)->next || !(*b)->next)
        return ;
    r_no_print(a);
    r_no_print(b);
    ft_putendl_fd("rr", 1);
}

