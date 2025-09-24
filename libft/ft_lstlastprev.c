/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlastprev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:09:57 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/17 09:11:53 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlastprev(t_list *s)
{
	t_list	*prev;

	if (!s || !s->next)
		return (NULL);
	while (s->next->next)
		s = s->next;
	prev = s;
	return (prev);
}
