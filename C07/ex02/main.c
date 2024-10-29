/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:33:20 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/17 13:33:23 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main ()
{
	int	i;
	int	arr;
	int	min;
	int	max;
	int	*range;
	
	i = 0;
	min = -7;
	max = 3;
	arr = ft_ultimate_range(&range, min, max);
	printf("These are the numbers in given range: \n");
	while (i < arr)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
