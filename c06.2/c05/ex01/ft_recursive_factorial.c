/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:42:32 by dtong             #+#    #+#             */
/*   Updated: 2022/12/08 14:17:45 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if ((nb <= 0) || (nb > 13))
		return (0);
	else if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}
/*int main(void)
{
        int j;
        j = ft_recursive_factorial(10);
        printf("%d", j);
}*/
