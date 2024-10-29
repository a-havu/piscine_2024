/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:51:55 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/17 19:14:02 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	m;
	int	total_len;

	i = 0;
	k = 0;
	m = 0;
	if (size == 0)
		return (0);
	while (strs[i])
	{	
		k = k + ft_strlen(strs[i]);
		i++;
	}
	while (sep[m])
		m++;
	total_len = k + (m * (size - 1)) + 1;
	return (total_len);
}

char	*ft_combination(int size, char *combined, char **strs, char *sep)
{
	int	i;
	int	char_i;
	int	comb_i;
	int	sep_i;

	i = 0;
	comb_i = 0;
	while (strs[i])
	{
		char_i = 0;
		while (strs[i][char_i])
			combined[comb_i++] = strs[i][char_i++];
		sep_i = 0;
		while (sep[sep_i] && i < size - 1)
			combined[comb_i++] = sep[sep_i++];
		i++;
	}
	return (combined);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*combined;

	combined = ((char *)malloc(ft_total_len(size, strs, sep) * sizeof(char)));
	return (ft_combination(size, combined, strs, sep));
}
