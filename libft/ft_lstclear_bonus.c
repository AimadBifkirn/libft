/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:59:32 by abifkirn          #+#    #+#             */
/*   Updated: 2024/11/02 16:59:34 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if (lst != NULL && del != NULL && *lst != NULL)
	{
		current = *lst;
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			del(tmp->content);
			free(tmp);
		}
		*lst = NULL;
	}
}
