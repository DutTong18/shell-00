/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-de- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:46:28 by cvan-de-          #+#    #+#             */
/*   Updated: 2022/12/03 15:33:30 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (0);
}
/*#include <stdio.h>
int main ()
{
    char x[] = "old string";
    char y[] = "new string";
    printf("%s\n", x);
    ft_strncpy(x, y, 7);
    printf("%s", x);
} */
