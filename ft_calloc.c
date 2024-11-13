/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:59:02 by dev               #+#    #+#             */
/*   Updated: 2024/11/13 19:23:45 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*tab;

	tab = malloc(count * size);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *)tab);
}

// int	main(void)
// {
// 	int		*arr;
// 	size_t	num_elements;

// 	num_elements = 5;
//
// 	arr = (int *)ft_calloc(num_elements, sizeof(int));
// 	if (arr == NULL)
// 	{
// 		printf("Erreur d'allocation mémoire.\n");
// 		return (1);
// 	}
//
// 	for (size_t i = 0; i < num_elements; i++)
// 	{
// 		printf("arr[%zu] = %d\n", i, arr[i]);
// 	}
//
// 	free(arr);
// 	return (0);
// }
