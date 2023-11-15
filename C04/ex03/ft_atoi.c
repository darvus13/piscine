/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:27:21 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/08 13:10:19 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_spaces(char *str, int *pi)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (((str[i] >= 9) && (str[i] <= 12)) || str[i] == 32)
	{
		i++;
	}
	while (((str[i] != '\0') && (str[i] == '-')) || str[i] == '+')
	{
		if (str[i] == '-')
		{
			count = count * (-1);
		}
		i++;
	}
	*pi = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	sign;

	num = 0;
	i = 0;
	sign = ft_spaces(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	num = num * sign;
	return (num);
}
/*
int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	char *cadena = argv[1];
	int	resultado = ft_atoi(cadena);
	int resul = atoi(cadena);
	printf("ft_atoi: %d\n", resultado);
	printf("atoi: %d", resul);
	return 0;
}*/
