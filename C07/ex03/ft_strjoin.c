/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:18:04 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/14 19:27:37 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*strs2;
	int		j;
	int		k;

	strs2 = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			strs2[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			strs2[k++] = sep[j++];
		}
		i++;
	}
	strs2[k] = '\0';
	return (strs2);
}
/*
int main()
{
	char	*str[4];

	str[0] = "h";
	str[1] = "o";
	str[2] = "l";
	str[3] = "a";
	printf("%s", ft_strjoin(4, str, "|"));
	return 0;
}*/
