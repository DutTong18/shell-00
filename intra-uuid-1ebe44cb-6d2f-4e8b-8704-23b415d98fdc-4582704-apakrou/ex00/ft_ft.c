/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:52:54 by apakrou           #+#    #+#             */
/*   Updated: 2022/12/06 13:02:04 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;
	int	*pntr;

	a = 9;
	pntr = &a;
	printf("Print Before a = %d\n", a);
	ft_ft(pntr);
	printf("Print After  a = %d", a);
	return (0);
}

