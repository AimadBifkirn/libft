/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:49:06 by abifkirn          #+#    #+#             */
/*   Updated: 2024/10/24 10:49:11 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*res;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	res = malloc(total);
	if (res)
		ft_bzero(res, total);
	return (res);
}
