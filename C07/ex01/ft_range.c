/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:07:30 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/17 11:35:05 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = ((int *) malloc((max - min) * sizeof (int)));
	if (arr == NULL)
		return (NULL);
	while (min < max)
	{
		arr[i++] = min++;
	}
	return (arr);
}
