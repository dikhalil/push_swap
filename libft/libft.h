/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:25:37 by dikhalil          #+#    #+#             */
/*   Updated: 2025/09/17 09:14:20 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long			content;
	int				index;
	struct s_list	*next;
}	t_list;

/* String Functions */
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/* List Functions */
t_list		*ft_lstnew(long content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstlastprev(t_list *s);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst);
int			ft_issorted(t_list *a);

/* I/O Functions */
void		ft_putendl_fd(char *s, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);

/* Character Classification Functions */
int			ft_isdigit(int d);
int			ft_isnumber(char *str);

/* Memory Allocation Functions */
long		ft_atoi(const char *str);

#endif
