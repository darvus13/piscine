/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:23:51 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/13 15:13:11 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if (!(nb % i))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_is_prime(-1));
	printf("%d", ft_is_prime(17));
}*/
