/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:55:00 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/13 23:14:06 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_list **a, t_list **b)
{
    int size;

    size = ft_lstsize(*a);
    if (size <= 5)
        small_sort(a, b);
    else
        radix_sort(a, b);
}
