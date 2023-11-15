/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:19:21 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/09 11:30:41 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;
	int		i;

	i = 0;
	name = argv[0];
	while (name[i] && argc != 2)
	{
		write (1, &name[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
