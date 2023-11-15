/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:00:49 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/15 13:53:13 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	numero;
	long	i;

	numero = nb;
	i = 2;
	if (numero < 0)
		return (0);
	if (numero == 1)
		return (1);
	if (numero >= 2)
	{
		while (i * i <= numero)
		{
			if (i * i == numero)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

int main()
{
	int sqrt;

	sqrt = 2147483647;
	printf("La raíz de %d es %d", sqrt, ft_sqrt(sqrt));
	return (0);
}
