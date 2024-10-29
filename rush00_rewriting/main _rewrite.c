/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:34:00 by kkivilah          #+#    #+#             */
/*   Updated: 2024/06/29 17:19:29 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	x = -25252;
	y = -24;
	if (x <= 0 || y <= 0)
	{
		write(1, "Meow! Please insert a positive number.\n", 39);
		return (8);
	}
	else
	{
		rush(x, y);
	}
	return (0);
}
