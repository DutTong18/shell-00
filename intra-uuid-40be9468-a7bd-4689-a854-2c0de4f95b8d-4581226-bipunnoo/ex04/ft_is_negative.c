/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bipunnoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:48:21 by bipunnoo          #+#    #+#             */
/*   Updated: 2022/12/04 13:56:56 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	no;
	char	y;

	no = 'N';
	y = 'Y';
	if (n < 0)
		write(1, &no, 1);
	else
		write(1, &y, 1);
}

int	main(void)
{
	ft_is_negative(-10);

	return (0);
}
