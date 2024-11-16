/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:45:03 by abifkirn          #+#    #+#             */
/*   Updated: 2024/10/24 10:45:16 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;
	unsigned int	cha;

	i = 0;
	st = (unsigned char *)s;
	cha = (unsigned char)c;
	while (i < n)
	{
		if (st[i] == cha)
			return (st + i);
		i++;
	}
	return (NULL);
}
