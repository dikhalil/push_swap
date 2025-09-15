/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:27:37 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/15 22:35:35 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int has_duplicates(t_list *a)
{
    t_list *node;
    t_list *next_node;

    node = a;
    while (node)
    {
        next_node = node->next;
        while (next_node)
        {
            if (next_node->content == node->content)
                return (1);
            next_node = next_node->next; 
        }
        node = node->next;
    }
    return (0);
}

int parse_args(char **argv, t_list **a)
{
    int i;
    long value;
    t_list *new_node;

    i = 1;
    value = 0;
    new_node = NULL;
    while (argv[i])
    {
        if (!ft_isnumber(argv[i]))
            return (0);
        value = ft_atoi(argv[i]);
        if (value < INT_MIN || value > INT_MAX)
            return (0);
        new_node = ft_lstnew(value);
        if (!new_node)
            return (0);
        ft_lstadd_back(a, new_node);
        i++;
    }
    if (has_duplicates(*a))
        return (0);
    return (1);
}

void index_stack(t_list **a)
{
    t_list *tmp1;
    t_list *tmp2;
    int index;

    tmp1 = *a;
    index = 0;
    while (tmp1)
    {
        index = 0;
        tmp2 = *a;
        while (tmp2)
        {
            if (tmp1->content > tmp2->content)
                index++;
            tmp2 = tmp2->next;
        }
        tmp1->index = index;
        tmp1 = tmp1->next;
    }
}

void move_min_top(t_list **a)
{
    int pos;
    int size;
    t_list *tmp;

    pos = 0;
    size = ft_lstsize(*a);
    tmp = *a;
    while (tmp)
    {
        if (tmp->index == 0)
            break;
        pos++;
        tmp = tmp->next;
    }
    if (pos <= size / 2)
        while (pos-- > 0)
            rotate(a, "ra");
    else
        while (pos++ < size)
            rrotate(a, "rra");
}
