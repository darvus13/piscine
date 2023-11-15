/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:04:09 by vboluda-          #+#    #+#             */
/*   Updated: 2023/10/29 13:56:12 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z' ;
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
