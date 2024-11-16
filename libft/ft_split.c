/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:46:25 by abifkirn          #+#    #+#             */
/*   Updated: 2024/10/28 20:56:25 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	table_free(char **table, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(table[i]);
		i++;
	}
	free(table);
}

static char	**alloc(char const *s, char c, char **table)
{
	size_t			j;
	unsigned int	i;
	int				x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		if (j > 0)
		{
			table[x] = ft_substr(s, i, j);
			if (table[x++] == NULL)
			{
				table_free(table, x);
				return (NULL);
			}
			i = j + i - 1;
		}
		i++;
	}
	table[x] = NULL;
	return (table);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	int		count;

	if (s == NULL)
		return (NULL);
	count = countwords(s, c);
	table = (char **)malloc(sizeof(char *) * (count + 1));
	if (table == NULL)
		return (NULL);
	if (alloc(s, c, table) == NULL)
		return (NULL);
	return (table);
}
