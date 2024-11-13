/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:55:16 by dev               #+#    #+#             */
/*   Updated: 2024/11/13 17:41:54 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_c_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_word_count(const char *s, char *c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && ft_c_is_charset(s[i], c))
			i++;
		if (s[i] && !ft_c_is_charset(s[i], c))
		{
			count++;
			while (s[i] && !ft_c_is_charset(s[i], c))
				i++;
		}
	}
	return (count);
}

int	ft_word_len(const char *s, char *c)
{
	int	len;

	len = 0;
	while (s[len] && !ft_c_is_charset(s[len], c))
		len++;
	return (len);
}

char	**ft_split(const char *s, char *c)
{
	int		i;
	int		j;
	int		k;
	char	**result;

	if (!s || !c || !(result = malloc(sizeof(char *) * (ft_word_count(s, c)
					+ 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ft_c_is_charset(s[i], c))
			i++;
		if (s[i])
		{
			k = 0;
			if (!(result[j] = malloc(sizeof(char) * (ft_word_len(s + i, c)
							+ 1))))
				return (NULL);
			while (s[i] && !ft_c_is_charset(s[i], c))
				result[j][k++] = s[i++];
			result[j++][k] = '\0';
		}
	}
	result[j] = NULL;
	return (result);
}
