/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:30:08 by dev               #+#    #+#             */
/*   Updated: 2024/11/12 17:52:51 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftlib.h"

int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;

	i = 0;
	while (is_set(*s1, set))
		s1++;
	while (s1[i])
		i++;
	while (is_set(s1[i - 1], set))
		i--;
	str = malloc(sizeof(char) * i + 1);
	ft_strlcpy(str, s1, i + 1);
	return (str);
}

// int	main(void)
// {
// 	char	*s1 = "Hello, World!";
// 	char	*set = "Hello World!";
// 	char	*trimmed_str;

// 	trimmed_str = ft_strtrim(s1, set);
// 	printf("Original string: '%s'\n", s1);
// 	printf("Trimmed string: '%s'\n", trimmed_str);
// 	free(trimmed_str);
// 	return (0);
// }
