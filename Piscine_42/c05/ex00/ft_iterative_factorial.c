/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 15:23:40 by aperrien          #+#    #+#             */
/*   Updated: 2021/06/21 13:49:06 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	while (nb)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
