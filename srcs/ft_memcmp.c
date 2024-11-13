/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:52:55 by dev               #+#    #+#             */
/*   Updated: 2024/11/12 17:22:35 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftlib.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[];
// 	char	str2[];
// 	int		result;

// 	str1[] = "Hello";
// 	str2[] = "Hellq";
// 	result = ft_memcmp(str1, str2, 0);
// 	if (result == 0)
// 	{
// 		printf("Les chaînes sont identiques.\n");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("Le premier bloc de mémoire est inférieur au second.\n");
// 	}
// 	else
// 	{
// 		printf("Le premier bloc de mémoire est supérieur au second.\n");
// 	}
// 	return (0);
// }
