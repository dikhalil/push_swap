/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:06:29 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/14 00:34:22 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void s_no_print(t_list **s)
{
    long *tmp;

    tmp = (*s)->content;
    (*s)->content = (*s)->next->content;
    (*s)->next->content = tmp;
}
void    sa(t_list **a)
{
    if (!a || !*a || !(*a)->next)
        return ;
    s_no_print(a);
    ft_putendl_fd("sa", 1);
}

void    sb(t_list **b)
{
    if (!b || !*b || !(*b)->next)
        return ;
    s_no_print(b);
    ft_putendl_fd("sb", 1);
}

void    ss(t_list **a, t_list **b)
{
    if (!a || !b|| !*a || !*b || !(*a)->next || !(*b)->next)
        return ;
    s_no_print(a);
    s_no_print(b);
    ft_putendl_fd("ss", 1);
}


