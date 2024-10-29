/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:58:56 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/03 17:00:23 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main (void)
{
	char a[] = "42424242";
	char b[] = "H2H!2";

	ft_str_is_numeric(a);
	ft_str_is_numeric(b);

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	return (0);
}
