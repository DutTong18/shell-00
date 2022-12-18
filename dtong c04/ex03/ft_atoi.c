/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:20:54 by dtong             #+#    #+#             */
/*   Updated: 2022/12/07 14:20:09 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		pos;
	long	ret;

	i = -1;
	ret = 0;
	pos = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
			continue ;
		if (str[i] == '-')
			pos = pos -1;
		else if (str[i] == '+')
			pos = pos + 1;
		if (str[i] >= 48 && str[i] <= 57)
			ret = ret * 10 + (str[i] - '0');
	}
	if (pos >= 0)
		pos = 1;
	else
		pos = -1;
	return ((int)(pos * ret));
}
/*int main()
{
    char i[] = "  --+++3673648h";
    int j = ft_atoi(i);
    printf("%d", j);
}*/
