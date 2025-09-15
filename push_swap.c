/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:55:00 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/15 22:35:19 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_list **a, t_list **b)
{
    int size;

    size = ft_lstsize(*a);
    index_stack(a);
    if (size <= 5)
        small_sort(a, b);
    else
        radix_sort(a, b);
}

int main(int argc, char **argv)
{
    t_list *a;
    t_list *b;

    a = NULL;
    b = NULL;
    if (argc < 2)
        return (0);
    if (!parse_args(argv, &a))
    {
        ft_putendl_fd("Error", 2);
        ft_lstclear(&a);
        return (1);
    }
    if (!ft_issorted(a))
        push_swap(&a, &b);
    ft_lstclear(&a);
    ft_lstclear(&b);
    return (0);
}
