/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:38:39 by vincent           #+#    #+#             */
/*   Updated: 2024/11/12 17:54:03 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftlib.h"

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
