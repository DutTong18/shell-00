/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:40:11 by dtong             #+#    #+#             */
/*   Updated: 2022/12/08 14:17:11 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ft;

	i = 0;
	ft = 1;
	if (nb < 0 || nb > 13)
		return (0);
	while (i < nb)
	{
		i++;
		ft = ft * i;
	}
	return (ft);
}
/*int main(void)
{
        int j;
        j = ft_iterative_factorial(10);
        printf("%d", j);
}*/
