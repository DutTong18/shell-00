/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:07:22 by trngo             #+#    #+#             */
/*   Updated: 2022/12/03 16:05:08 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 7;
	int b = 2;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod); 
	printf("divison: %d \n", div);
	printf("remainder: %d \n", mod);

	return (0);
}
*/
