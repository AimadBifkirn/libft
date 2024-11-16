/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:59:50 by abifkirn          #+#    #+#             */
/*   Updated: 2024/10/28 11:59:55 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*res;
	size_t		i;
	size_t		j;
	size_t		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	if (j == 0)
		return (ft_strdup(""));
	j--;
	while (s1[i] != '\0' && ft_memchr(set, s1[i], ft_strlen(set)) != NULL)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (j > i && ft_memchr(set, s1[j], ft_strlen(set)) != NULL)
		j--;
	len = j - i + 1;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1 + i, len);
	res[len] = '\0';
	return (res);
}
