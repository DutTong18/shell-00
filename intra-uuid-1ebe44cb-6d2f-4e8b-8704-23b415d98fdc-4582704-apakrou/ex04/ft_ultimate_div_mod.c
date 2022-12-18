/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:19:44 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/06 13:08:20 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	*a = div;
	*b = mod;
	div = *a / *b;
	mod = *a & *b;
}

int	main(void)
{
	int x;
	int y;
	int *a;
	int	*b;

	x = 48;
	y = 7;
	a = &x;
	b = &y;

	ft_ultimate_div_mod(a, b);
	printf("%d, %d", *a, *b);
}
