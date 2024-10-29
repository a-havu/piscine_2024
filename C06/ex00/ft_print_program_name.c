/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:27:56 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/15 11:03:41 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	k;

	k = 0;
	while (argv[0][k] && argc)
	{
		write (1, &argv[0][k], 1);
		k++;
	}
	write (1, "\n", 1);
	return (0);
}
