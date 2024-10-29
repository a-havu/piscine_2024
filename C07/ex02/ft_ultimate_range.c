/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:33:11 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/17 13:33:14 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ((int *)malloc((max - min) * sizeof (int)));
	if (*range == NULL)
		return (-1);
	arr = *range;
	while (min < max)
		arr[i++] = min++;
	return (i);
}
