/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:46:34 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/15 13:00:51 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ayuda(int num)
{
	int	primero;
	int	segundo;

	if (num > 9)
	{
		primero = num / 10;
		segundo = num % 10;
		ft_putchar(primero + 48);
		ft_putchar(segundo + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(num + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_ayuda(i);
			ft_putchar(' ');
			ft_ayuda(j);
			if (i < 98 || j < 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			j++;
		}
		i++;
	}
}
/*
int main()
{
	ft_print_comb2();
	return 0;
}*/
