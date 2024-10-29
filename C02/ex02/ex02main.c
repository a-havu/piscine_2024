/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:43:15 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/03 15:08:46 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int main (void)
{
	char a[] = "Hihihihahaha";
	char b[] = "H1h1h1 h4h4h4";
 
	ft_str_is_alpha(a);
	ft_str_is_alpha(b);

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	return 0;
}
