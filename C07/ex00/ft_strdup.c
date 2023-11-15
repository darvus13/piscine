/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:26:06 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/14 13:53:57 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
	{
		return (0);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char	original[11] = "Hola Mundo";
	char	*duplicado;
	int	o_len, d_len;

	duplicado = ft_strdup(original);
	o_len = ft_strlen(original);
	d_len = ft_strlen(duplicado);
	printf("%s\n", original);
	printf("%s\n", strdup(original));
	printf("%s", duplicado);
	return (0);
}*/
