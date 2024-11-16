/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:46:33 by abifkirn          #+#    #+#             */
/*   Updated: 2024/10/21 18:48:04 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	d;

	s_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	d = d_len;
	i = 0;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	while (src[i] != '\0' && d_len + 1 < dstsize)
	{
		dst[d_len] = src[i];
		i++;
		d_len++;
	}
	dst[d_len] = '\0';
	return (d + s_len);
}
