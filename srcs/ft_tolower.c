/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:20:06 by vincent           #+#    #+#             */
/*   Updated: 2024/11/06 16:23:08 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (c);
	else
		return (c + 32);
}
/* #include <stdio.h>

int main ()
{
	int test = 'z';
	printf("%c", test);
	printf("\n%c", toupper(test));

} */
