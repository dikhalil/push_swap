/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:23:57 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/15 22:24:07 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isnumber(char *str)
{
    int j = 0;
    if (str[0] == '-' || str[0] == '+')
        j++;
    while (str[j])
    {
        if (!ft_isdigit(str[j]))
            return 0; 
        j++;
    }
    return 1; 
}