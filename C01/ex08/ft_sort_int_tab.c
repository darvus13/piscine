/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:32:43 by vboluda-          #+#    #+#             */
/*   Updated: 2023/10/31 13:42:40 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	temp2;
	int	a;

	temp2 = 1;
	while (temp2)
	{
		temp = 0;
		temp2 = 0;
		while (temp < size - 1)
		{
			if (tab[temp] > tab[temp + 1])
			{
				a = tab[temp];
				tab[temp] = tab[temp + 1];
				tab[temp + 1] = a;
				temp2 = 1;
			}
			temp++;
		}
	}
}

/*
int main()
{
	int tab[6] = {6, 2, 4, 5, 1, 3};
	int size = 6;

	ft_sort_int_tab(tab, size);
	int i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}
*/
