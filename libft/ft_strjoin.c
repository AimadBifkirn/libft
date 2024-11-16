/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:12:42 by abifkirn          #+#    #+#             */
/*   Updated: 2024/10/27 15:12:48 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			size1;
	size_t			size2;
	char			*res;

	if (s1 == NULL || s2 == NULL)
		return (ft_strdup(""));
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	res = (char *)malloc(size1 + size2 + 1);
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1, size1);
	ft_memcpy(res + size1, s2, size2);
	res[size1 + size2] = '\0';
	return (res);
}
