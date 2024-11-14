/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:59:44 by vincent           #+#    #+#             */
/*   Updated: 2024/11/14 20:10:16 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
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
