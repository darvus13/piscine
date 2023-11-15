/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:05:24 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/05 10:59:11 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	retorno;

	retorno = 1;
	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z')
			|| (str[a] >= 'A' && str[a] <= 'Z'))
		{
			a++;
		}
		else
		{
			retorno = 0;
			break ;
		}
	}
	return (retorno);
}
/*
int main()
{
	printf("%d", ft_str_is_alpha("Hello123"));
	return 0;
}
*/
