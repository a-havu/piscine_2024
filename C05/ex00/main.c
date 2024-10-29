/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:40:53 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/08 16:30:42 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main (void)
{
	int result = ft_iterative_factorial(10);
	printf("The factorial is: %d\n", result);
	return (0);
}
