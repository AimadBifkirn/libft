/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:41:11 by abifkirn          #+#    #+#             */
/*   Updated: 2024/11/02 16:41:13 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add;

	if (new != NULL && lst != NULL)
	{
		if (*lst == NULL)
		{
			*lst = new;
			return ;
		}
		add = *lst;
		while (add->next != NULL)
			add = add->next;
		add->next = new;
	}
}
