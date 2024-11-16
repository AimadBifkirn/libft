/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:57:32 by abifkirn          #+#    #+#             */
/*   Updated: 2024/10/29 19:03:30 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenn(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*alloc(char *t, int n, int len)
{
	if (n >= 0)
		t = (char *)malloc(sizeof(char) * (len + 1));
	else
		t = (char *)malloc(sizeof(char) * (len + 2));
	if (t == NULL)
		return (NULL);
	if (n == 0)
	{
		t[0] = '0';
		t[len] = '\0';
	}
	else if (n < 0)
	{
		t[0] = '-';
		t[len + 1] = '\0';
		n = -n;
	}
	else if (n > 0)
		t[len--] = '\0';
	while (n > 0)
	{
		t[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (t);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*t;

	len = lenn(n);
	t = NULL;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (alloc(t, n, len));
}
