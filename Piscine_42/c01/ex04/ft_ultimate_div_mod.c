/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:46:35 by aperrien          #+#    #+#             */
/*   Updated: 2021/06/09 15:10:46 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

ft_ultimate_div_mod(int *a, int *b)

{
int temp;

temp = *a;
*a = *a / *b;
*b = temp % *b;
}
