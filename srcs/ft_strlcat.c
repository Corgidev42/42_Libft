/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:45:35 by vincent           #+#    #+#             */
/*   Updated: 2024/11/12 17:22:35 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftlib.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	j;

	dstlen = ft_strlen(dst);
	if (dstsize == 0 || dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	i = dstlen;
	j = 0;
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + ft_strlen(src));
}
/* #include <stdio.h>

int main()
{
	char dest[20] = "Hello";
	const char *src = ", World!";

	size_t result = ft_strlcat(dest, src, 20);

	printf("Dest: %s\n", dest);
	printf("Longueur totale: %zu\n", result);

	return 0;
}
 */
