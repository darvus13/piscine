/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:40:37 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/14 10:50:43 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	while (nb > 0)
	{
		resultado *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (resultado);
}
/*
int main()
{
	int nb = 5;

	printf("%d", ft_iterative_factorial(nb));
	return (0);
}*/
