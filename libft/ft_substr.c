/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:14:44 by abifkirn          #+#    #+#             */
/*   Updated: 2024/10/27 14:14:53 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*res;
	size_t			max_len;

	if (s == NULL || start >= ft_strlen(s))
		return (ft_strdup(""));
	max_len = ft_strlen(s) - start;
	i = 0;
	if (len > max_len)
		len = max_len;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s + start, len);
	res[len] = '\0';
	return (res);
}
