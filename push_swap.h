/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:55:02 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/17 14:44:53 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <limits.h>

/* ---------------- utils ---------------- */
int		parse_args(char **argv, t_list **a);
void	index_stack(t_list **a);
void	move_min_top(t_list **a);

/* ---------------- Operations ---------------- */
void	push(t_list **from, t_list **to, char *op);
void	swap(t_list **stack, char *op);
void	rotate(t_list **stack, char *op);
void	rrotate(t_list **stack, char *op);
void	mix(t_list **a, t_list **b, char *op);

/* ---------------- Small Sort ---------------- */
void	sort_2(t_list **a);
void	sort_3(t_list **a);
void	sort_4(t_list **a, t_list **b);
void	sort_5(t_list **a, t_list **b);
void	small_sort(t_list **a, t_list **b);

/* ---------------- Radix Sort ---------------- */
void	radix_sort(t_list **a, t_list **b);

/* ---------------- Push Swap ---------------- */
void	push_swap(t_list **a, t_list **b);

#endif
