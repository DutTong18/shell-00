/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:09:32 by dtong             #+#    #+#             */
/*   Updated: 2022/12/07 13:19:00 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		n = n * -1;
		write(1, "-", 1);
	}
	if (n == -2147483648)
	{
		ft_putnbr(-2147483);
		ft_putnbr(684);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}
