/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:58:20 by kchan             #+#    #+#             */
/*   Updated: 2022/12/05 16:06:34 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main()
{
	int	div, mod, a, b;

	a = 6;
	b = 3;

	ft_div_mod(a, b, &div, &mod);
	printf("\n%d/%d = %d with remainder %d\n\n", a ,b, div, mod);
}
*/
