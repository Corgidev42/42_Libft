/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:38:39 by vincent           #+#    #+#             */
/*   Updated: 2024/11/05 15:09:24 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	int				i;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < (int)num)
	{
		*p = (unsigned char)value;
		p++;
		i++;
	}
	return (ptr);
}
