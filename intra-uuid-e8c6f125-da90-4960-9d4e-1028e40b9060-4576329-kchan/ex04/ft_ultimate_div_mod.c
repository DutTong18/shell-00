/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:47:38 by kchan             #+#    #+#             */
/*   Updated: 2022/12/05 16:06:58 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>
int main ()
{
	int a, b, *pta, *ptb;

	a = 8;
	b = 4;
	pta = &a;
	ptb = &b;
	
	printf(" %d divider %d\n", *pta, *ptb);
	ft_ultimate_div_mod(pta,ptb);
	printf(" %d with remainder %d", *pta, *ptb);
	return (0);
}
*/
