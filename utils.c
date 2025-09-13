/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:27:37 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/13 20:58:21 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

int has_duplicates(t_list *a)
{
    t_list *i;
    t_list *j;

    i = a;
    while (a)
    {
        j = i->next;
        while (j)
        {
            if ((long)(j->content) == (long)(i->content))
                return (1);
            j = j->next; 
        }
        i = i->next;
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
        if (!ft_isdigit(argv[i]))
            return (0);
        value = ft_atoi(argv[i]);
        if (value < INT_MIN || value > INT_MAX)
            return (0);
        new_node = ft_lstnew((void *)value);
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
        if ((long)(a->content) > (long)(a->next->content))
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

void index_stack(t_list *s)
{
    t_list *tmp1;
    t_list *tmp2;
    int index;

    tmp1 = s;
    index = 0;
    while (tmp1)
    {
        index = 0;
        tmp2 = s;
        while (tmp2)
        {
            if ((long)(tmp1->content) > (long)(tmp2->content))
                index++;
            tmp2 = tmp2->next;
        }
        tmp1->index = index;
        tmp1 = tmp1->next;
    }
}

void move_min_top(t_list **s)
{
    int pos;
    int size;
    t_list *tmp;

    pos = 0;
    size = ft_lstsize(*s);
    tmp = *s;
    while (tmp)
    {
        if (tmp->index == 0)
            break;
        pos++;
        tmp = tmp->next;
    }
    if (pos <= size / 2)
        while (pos-- > 0)
            ra(s);
    else
        while (pos++ < size)
            rra(s);
}
