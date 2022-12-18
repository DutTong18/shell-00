/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:50:57 by kchan             #+#    #+#             */
/*   Updated: 2022/12/05 16:04:42 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	tem;

	tem = *a;
	*a = *b;
	*b = tem;
}

#include <stdio.h>
int main()
{
	int h;
	int k;
	
	h = 5;
	k = 10;
	
	printf("before swap:%d %d\n",h,k);
	printf("before swap path: address h %p address k  %p\n",&h,&k);
	ft_swap(&h, &k);
	printf("after swap:%d %d\n",h,k);
	printf("after swap path: address h %p address k %p\n",&h,&k);
}

