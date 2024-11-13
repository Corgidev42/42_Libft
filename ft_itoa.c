/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:25:38 by dev               #+#    #+#             */
/*   Updated: 2024/11/13 19:23:44 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	number_size(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_cast(char *nb, int n, size_t len)
{
	if (n == 0)
	{
		nb[0] = '0';
		return (nb);
	}
	if (n < 0)
	{
		nb[0] = '-';
		n = -n;
	}
	while (n)
	{
		nb[--len] = n % 10 + '0';
		n /= 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*nb;
	size_t	len;

	if (n == -2147483648)
	{
		nb = malloc(sizeof(char) * 12);
		if (nb == NULL)
			return (NULL);
		ft_strlcpy(nb, "-2147483648", 12);
		return (nb);
	}
	len = number_size(n);
	nb = malloc(sizeof(char) * (len + 1));
	if (nb == NULL)
		return (NULL);
	nb = ft_cast(nb, n, len);
	nb[len] = '\0';
	return (nb);
}

// int	main(void)
// {
// 	int		number = -2147483648;
// 	char	*str = ft_itoa(number);
// 	if (str)
// 		printf("The string representation of %d is %s\n", number, str);
// 	else
// 		printf("Memory allocation failed\n");
// 	if (number != -2147483648) // Eviter de libérer une chaîne littérale
// 		free(str);
// 	return (0);
// }
