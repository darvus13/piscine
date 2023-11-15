/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:40:59 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/08 13:11:59 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
			return (-1);
		else if (s1[i] != '\0' && s2[i] == '\0')
			return (1);
	}
	return (0);
}
/*
int main()
{
	char *s1 = "";
	char *s2 = "dsada";
	unsigned int n;

	n = 3;
	printf ("%d\n", ft_strncmp(s1, s2, n));
	printf ("%d", strncmp (s1, s2, n));
	return (0);
}*/
