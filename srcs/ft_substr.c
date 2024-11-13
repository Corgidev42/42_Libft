/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:45:00 by dev               #+#    #+#             */
/*   Updated: 2024/11/13 17:39:22 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len && s[i])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}

// int main(void)
// {
// 	char *s = "Hello, World!";
// 	char *substr;

// 	substr = ft_substr(s, 7, 5);
// 	printf("Substring: %s\n", substr);
// 	free(substr);

// 	return (0);
// }
