/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:25:37 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/14 13:51:54 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*size;
	int	min2;

	min2 = min;
	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	size = malloc(sizeof(int) * range - 1);
	if (!size)
	{
		return (0);
	}
	i = 0;
	while (min2 < max)
	{
		size[i] = min2;
		i++;
		min2++;
	}
	return (size);
}
/*
int main()
{
	int	range;
	int	min;
	int	max;
	int	*size;
	int	i;

	i = 0;
	min = 12;
	max = 12;
	range = max - min;
	size = ft_range(min, max);
	while (range != 0)
	{
		printf("%d", size[i]);
		i++;
		range--;
	}
	return (0);
}*/
