/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:32:26 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/13 11:39:36 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb > 0)
	{
		resultado *= nb * ft_recursive_factorial (nb - 1);
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (resultado);
}
/*
int	main()
{
	printf("%d", ft_recursive_factorial(-1));
}*/
