/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:10:51 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/08 16:05:38 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	negative = 0;
	result = 0;
	while ((str[i] >= '\t' && str[i] < '\r') || str[i] > ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if  (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (negative % 2 == 1)
	{
		return (result * -1);
	}
	return (result);
}
#include <stdio.h>

int ft_atoi(char *str);

int main (void)
{
	printf("%d", ft_atoi("   --++--+Some numb3355558tt6t"));
}
