/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:35:36 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/08 11:26:46 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ldest;
	unsigned int	lsrc;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (size <= ldest)
	{
		return (lsrc + size);
	}
	while (src[i] != '\0' && i < size - ldest - 1)
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = '\0';
	return (ldest + lsrc);
}
/*
int main ()
{
	char a[] = "Hola";
	char b[] = "Mundo";
	int size;

	size = 3;
	
	printf ("%u\n", ft_strlcat (b, a, size));
	printf ("%lu", strlcat (b, a, size));
	return 0;
}*/
