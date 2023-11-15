/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:56:58 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/14 11:09:03 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	resultado;

	resultado = 1;
	if ((nb == 0 && power != 0) || power < 0)
	{
		return (0);
	}
	if ((power == 0) || ((nb < 0) && (power == 0)))
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			resultado = nb * resultado;
			power--;
		}
		return (resultado);
	}
}
/*
int	main()
{
	printf("%d", ft_iterative_power(2, 2));
}*/
