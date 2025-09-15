/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 19:10:04 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/15 21:36:56 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_list **from, t_list **to, char *op)
{
    t_list *tmp;
    
    if (!from || !*from)
        return ;
    tmp = *from;
    *from = (*from)->next;
    tmp->next = NULL;
    ft_lstadd_front(to, tmp);
    ft_putendl_fd(op, 1);
}

void swap(t_list **stack, char *op)
{
    t_list *first;
    t_list *second;
    
    if (!stack || !*stack || !(*stack)->next)
        return ;
    first = *stack;
    second = (*stack)->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
    ft_putendl_fd(op, 1);
}

void rotate(t_list **stack, char *op)
{
    t_list *tmp;
    
    if (!stack || !*stack || !(*stack)->next)
        return ;
    tmp = *stack;
    *stack = (*stack)->next;
    tmp->next = NULL;
    ft_lstadd_back(stack, tmp);
    ft_putendl_fd(op, 1);
}

void rrotate(t_list **stack, char *op)
{
    t_list *last;
    t_list *prev;
    
    if (!stack || !*stack || !(*stack)->next)
        return ;
    prev = ft_lstlastprev(*stack);
    last = prev->next;
    prev->next = NULL;
    ft_lstadd_front(stack, last);
    ft_putendl_fd(op, 1);
}

void mix(t_list **a, t_list **b, char *op)
{
    if (!ft_strncmp(op, "ss", 2))
    {
        swap(a, NULL);
        swap(b, op);
    }
    else if (!ft_strncmp(op, "rr", 2))
    {
        rotate(a, NULL);
        rotate(b, op);
    }
    else if (!ft_strncmp(op, "rrr", 3))
    {
        rrotate(a, NULL);
        rrotate(b, op);
    }
    else 
        return ;
}