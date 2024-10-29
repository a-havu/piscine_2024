/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:56:40 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/01 17:16:48 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int main (void)
{
	int *a;
	int *b;
	int nr_a;
	int nr_b;

	nr_a = 9;
	nr_b = 2;

	a = &nr_a;
	b = &nr_b;

	ft_ultimate_div_mod(a, b);
	printf("%d\n%d", *a, *b);
}
*/
