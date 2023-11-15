/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:44:42 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/13 11:49:47 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	resultado;

	resultado = nb;
	if (power > 0)
	{
		resultado *= ft_recursive_power(nb, power - 1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (resultado);
}
/*
int	main()
{
	printf("%d", ft_recursive_power(2, 3));
}*/
