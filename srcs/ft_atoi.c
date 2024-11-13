/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:43:48 by dev               #+#    #+#             */
/*   Updated: 2024/11/12 17:20:33 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ftlib.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}

// int main() {
//     const char *str1 = "12345";
//     const char *str2 = "-42";
//     const char *str3 = "  123abc";
	// Les caractères après les chiffres sont ignorés

//     int num1 = ft_atoi(str1);
//     int num2 = ft_atoi(str2);
//     int num3 = ft_atoi(str3);

//     printf("num1 = %d\n", num1);
//     printf("num2 = %d\n", num2);
//     printf("num3 = %d\n", num3);

//     return (0);
// }
