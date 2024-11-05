/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:26:24 by vincent           #+#    #+#             */
/*   Updated: 2024/11/05 14:44:31 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	c += 48;
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 122))
		return (1);
	return (0);
}
