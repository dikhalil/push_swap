/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:08:44 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/13 20:58:21 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static void p_no_print(t_list **from, t_list **to)
{
    t_list *tmp;

    tmp = *from;
    *from = (*from)->next;
    tmp->next = *to;
    *to = tmp;
}

void pa(t_list **a, t_list **b)
{
    if (!b || !*b)
        return ;
    p_no_print(b, a);
    ft_putendl_fd("pa", 1);
}

void pb(t_list **a, t_list **b)
{
    if (!a || !*a)
        return ;
    p_no_print(a, b);
    ft_putendl_fd("pb", 1);
}
