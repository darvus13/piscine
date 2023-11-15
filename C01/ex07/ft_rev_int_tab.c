/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:34:26 by vboluda-          #+#    #+#             */
/*   Updated: 2023/10/31 11:36:52 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	temp2;

	temp = 0;
	while (temp < (size / 2))
	{
		temp2 = tab[temp];
		tab[temp] = tab [size - 1 - temp];
		tab[size - 1 - temp] = temp2;
		temp++;
	}
}
/* int main()
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int size;

	size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d" "%d" "%d" "%d" "%d" "%d", tab[0], tab [1], tab [2], tab[3])
	return 0;
}
*/
