/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:41:22 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/04 16:39:15 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	temp;

	temp = 0;
	while (src[temp] != '\0' && temp < n)
	{
		dest[temp] = src[temp];
		temp++;
	}
	while (temp < n)
	{
		dest[temp] = '\0';
		temp++;
	}
	return (dest);
}
/*
int	main()
{
	char src[] = "Campus";
	char prueba[] = "42";
	char prueba1[] = "421";

	printf("%s", ft_strncpy(prueba, src, 7));
	printf("\n%s", ft_strncpy(prueba1, src, 7));
	printf("\n%s", ft_strncpy(prueba, src, 10));
    return 0;
}
*/