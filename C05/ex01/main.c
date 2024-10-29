/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:31:32 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/08 18:08:24 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main (void)
{
	int result = ft_recursive_factorial(0);
	printf("The factorial is: %d\n", result);
}
