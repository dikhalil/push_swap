/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 21:29:37 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/13 22:27:28 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int max_index(t_list *a)
{
    t_list *tmp;
    int index;

    tmp = a;
    index = 0;
    while (tmp)
    {
        if (index < tmp->index)
            index = tmp->index;
        tmp = tmp->next;
    }
    return (index);
}
int bits_count(t_list *a, int (*max_index) (t_list *a))
{
    int bits;
    int max;
    
    bits = 0;
    max = max_index(a);
    while (max >> bits)
        bits++;   
    return (bits);
}
void radix_sort(t_list **a, t_list **b)
{
    int i;
    int j;
    int bits;
    int size;
    
    i = 0;
    bits = bits_count(*a, &max_index);
    while (i < bits)
    {
        j = 0;
        size = ft_lstsize(*a);
        while (j < size)
        {
            if (((*a)->index >> i & 1))
                ra(a);
            else 
                pb(a, b);
            j++;
        }
        while (*b)
            pa(a, b);
        i++;
    }
}

