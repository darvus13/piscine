/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:15:18 by vboluda-          #+#    #+#             */
/*   Updated: 2023/10/30 16:16:42 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main()
{
	int dividendo = 10;
	int divisor = 2;
	int resultado_division, resto_division;

	ft_div_mod (dividendo, divisor, &resultado_division, &resto_division);
	printf("%d", resultado_division);
	return 0;
}
*/
