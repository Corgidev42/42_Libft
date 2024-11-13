/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:23:53 by vincent           #+#    #+#             */
/*   Updated: 2024/11/13 18:41:19 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	const char *str1 = "Hello, world!";
	const char *str2 = "Hello, everyone!";

	int result = ft_strncmp(str1, str2, 5);

	if (result == 0)
	{
		printf("Caractères des deux chaînes sont identiques.\n");
	}
	else if (result < 0)
	{
		printf("Caractères de str1 sont inférieurs à ceux de str2.\n");
	}
	else
	{
		printf("Caractères de str1 sont supérieurs à ceux de str2.\n");
	}

	return (0);
} */
