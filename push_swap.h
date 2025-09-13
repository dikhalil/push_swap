/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:55:02 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/13 23:26:10 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "./libft/libft.h"
#include <limits.h>

/* ---------------- utils ---------------- */
int parse_args(char **argv, t_list **a);
int is_sorted(t_list *a);
void index_stack(t_list *s);
void move_min_top(t_list **s);
void del_int(void *content);
t_list      *ft_lstlastprev(t_list *lst);

/* ---------------- Push Swap ---------------- */

void push_swap(t_list **a, t_list **b);

/* ---------------- Swap ---------------- */
void        sa(t_list **a);
void        sb(t_list **b);
void        ss(t_list **a, t_list **b);

/* ---------------- Push ---------------- */
void        pa(t_list **a, t_list **b);
void        pb(t_list **a, t_list **b);

/* ---------------- Rotate ---------------- */
void        ra(t_list **a);
void        rb(t_list **b);
void        rr(t_list **a, t_list **b);

/* ---------------- Reverse Rotate ---------------- */
void        rra(t_list **a);
void        rrb(t_list **b);
void        rrr(t_list **a, t_list **b);

/* ---------------- Small Sort ---------------- */
void        sort_2(t_list **a);
void        sort_3(t_list **a);
void        sort_4(t_list **a, t_list **b);
void        sort_5(t_list **a, t_list **b);
void        small_sort(t_list **a, t_list **b);

/* ---------------- Radix Sort ---------------- */
void        radix_sort(t_list **a, t_list **b);

#endif