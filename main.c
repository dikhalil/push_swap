/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:54:55 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/14 00:25:51 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
        ft_lstclear(&a, del_int);
        return (1);
    }
    index_stack(a);
    if (!is_sorted(a))
        push_swap(&a, &b);
    ft_lstclear(&a, del_int);
    ft_lstclear(&b, del_int);
    return (0);
}
