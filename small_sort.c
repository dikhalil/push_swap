/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:53:40 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/18 17:44:43 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_list **a)
{
	if ((*a)->index > (*a)->next->index)
		swap(a, "sa");
}

void	sort_3(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first > second && second > third)
	{
		swap(a, "sa");
		rrotate(a, "rra");
	}
	else if (second > third && third > first)
	{
		swap(a, "sa");
		rotate(a, "ra");
	}
	else if (first > third && third > second)
		rotate(a, "ra");
	else if (second > first && first > third)
		rrotate(a, "rra");
	else if (third > first && first > second)
		swap(a, "sa");
}

void	sort_4(t_list **a, t_list **b)
{
	move_min_top(a);
	push(a, b, "pb");
	sort_3(a);
	push(b, a, "pa");
}

void	sort_5(t_list **a, t_list **b)
{
	move_min_top(a);
	push(a, b, "pb");
	sort_4(a, b);
	push(b, a, "pa");
}

void	small_sort(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else
		sort_5(a, b);
}
