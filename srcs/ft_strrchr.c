/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:00:43 by vincent           #+#    #+#             */
/*   Updated: 2024/11/12 17:22:35 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftlib.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

/* #include <stdio.h>

int	main(void)
{
	const char	*str;
	char		*result;

	str = "Hello, world!";
	result = ft_strrchr(str, 'o');
	if (result != NULL)
	{
		printf("Dernière occurrence de 'o' : %ld\n", result - str);
	}
	else
	{
		printf("'o' n'est pas présent dans la chaîne.\n");
	}
	return (0);
}
 */
