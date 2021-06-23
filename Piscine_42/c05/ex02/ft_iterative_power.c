/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 15:23:27 by aperrien          #+#    #+#             */
/*   Updated: 2021/06/23 10:17:51 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	k;

	i = power;
	k = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 0)
	{
		k *= nb;
		i--;
	}
	return (k);
}
/*int	main(void)
{
	int	k;

	k = ft_iterative_power(10, 5);
	printf("%d\n", k);
	return (0);
}*/
