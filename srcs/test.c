/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:00:00 by dev               #+#    #+#             */
/*   Updated: 2024/11/13 17:29:15 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_split_result(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		printf("result[%d]: %s\n", i, result[i]);
		i++;
	}
}

void	free_split_result(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

void	test_ft_split(char *s, char *charset)
{
	char	**result;

	result = ft_split(s, charset);
	if (result == NULL)
	{
		printf("ft_split returned NULL\n");
		return ;
	}
	print_split_result(result);
	free_split_result(result);
}

int	main(void)
{
	printf("Test 1:\n");
	test_ft_split("Hello world this is a test", " ");
	printf("\nTest 2:\n");
	test_ft_split("42,Paris,School", ",");
	printf("\nTest 3:\n");
	test_ft_split(",,,42,,,Paris,,,School,,,", ",");
	printf("\nTest 4:\n");
	test_ft_split("NoDelimitersHere", ",");
	printf("\nTest 5:\n");
	test_ft_split("", ",");
	return (0);
}
