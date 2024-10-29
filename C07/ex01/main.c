/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:07:40 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/16 15:07:42 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main ()
{	
	int	i;
	int	*arr;
	int	min;
	int	max;
	
	i = 0;
	min = -7;
	max = 3;
	arr = ft_range(min, max);
	printf("These are the numbers in given range: \n");
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	arr  = 0;
	return (0);
}
