/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:53:07 by dev               #+#    #+#             */
/*   Updated: 2024/11/13 17:29:15 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	charac;
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	charac = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == charac)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

// #include <string.h>

// int main() {
//     char str[] = "Hello, world!";
//     char *ptr = ft_memchr(str, 'o', sizeof(str));

//     if (ptr != NULL) {
//         printf("L'octet trouvé est : %c\n", *ptr);
//     } else {
//         printf("L'octet n'a pas été trouvé.\n");
//     }

//     return (0);
// }
