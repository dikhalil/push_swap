/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:54:55 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/13 20:58:21 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

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
    index_stack(a);
    if (!is_sorted(a))
        push_swap(&a, &b);
    ft_lstclear(&a);
    ft_lstclear(&b);
    return (0);
}
