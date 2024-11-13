/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:14:03 by dev               #+#    #+#             */
/*   Updated: 2024/11/13 19:23:45 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// int	main(void)
// {
// 	const char	*original;
// 	char		*copy;

// 	original = "Hello, World!";
// 	copy = ft_strdup(original);
// 	if (copy == NULL)
// 	{
// 		printf("Erreur d'allocation mémoire.\n");
// 		return (1);
// 	}
// 	printf("Original: %s\n", original);
// 	printf("Copy: %s\n", copy);
// 	free(copy);
// 	return (0);
// }
