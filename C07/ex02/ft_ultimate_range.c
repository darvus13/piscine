/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:55:45 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/14 14:41:34 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	min2;
	int	*rango;
	int	size;

	size = max - min;
	min2 = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	rango = malloc(sizeof(int) * (size - 1));
	if (!rango)
		return (0);
	*range = rango;
	i = 0;
	while (min2 < max)
	{
		rango[i] = min2;
		i++;
		min2++;
	}
	return (size);
}
/*
int main()
{
	int	*range = NULL;
	int	min;
	int	max;
	int	size;
	int	i;

	i = 0;
	min = 2;
	max = 12;
	size = ft_ultimate_range(&range, min, max);
	printf("El array tiene %d dígitos\n", size);
	while (i < size)
	{
		printf("%d", range[i]);
		i++;
	}
	return (0);
}*/
