/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:15:58 by vincent           #+#    #+#             */
/*   Updated: 2024/11/06 16:23:05 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (c);
	else
		return (c - 32);
}

/* #include <stdio.h>

int main ()
{
	int test = 'z';
	printf("%c", test);
	printf("\n%c", toupper(test));

}
 */
