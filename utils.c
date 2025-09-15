/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:27:37 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/15 21:37:27 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int has_duplicates(t_list *a)
{
    t_list *i;
    t_list *j;

    i = a;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if (j->content == i->content)
                return (1);
            j = j->next; 
        }
        i = i->next;
    }
    return (0);
}
static int is_number(char *str)
{
    int j = 0;
    if (str[0] == '-' || str[0] == '+')
        j++;
    while (str[j])
    {
        if (!ft_isdigit(str[j]))
            return 0; 
        j++;
    }
    return 1; 
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
        if (!is_number(argv[i]))
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

int is_sorted(t_list *a)
{
    while (a && a->next)
    {
        if (a->content > a->next->content)
            return (0);
        a = a->next;
    }
    return (1);
}

t_list *ft_lstlastprev(t_list *s)
{
    t_list *prev;

    if (!s || !s->next)
        return (NULL);
    while (s->next->next)
        s = s->next;
    prev = s;
    return (prev);
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
