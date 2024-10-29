/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:33:32 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/01 17:07:33 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main (void)
{
	int x;
	int y;

	x = 5;
	y = 8;

	ft_swap(&x, &y);
	printf("x's value is now %d\n", x);
	printf("y's value is now %d\n", y);
	return (0);
}
*/
