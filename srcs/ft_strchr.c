/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:59:44 by vincent           #+#    #+#             */
/*   Updated: 2024/11/13 17:29:15 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	const char *str = "Hello, world!";
	char *result = ft_strchr(str, 'H');

	if (result != NULL)
	{
		printf("Première occurrence : %ld\n", result - str);
	}
	else
	{
		printf("'o' n'est pas présent dans la chaîne.\n");
	}

	return (0);
} */
