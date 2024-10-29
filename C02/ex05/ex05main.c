/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:38:24 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/03 17:52:09 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int main (void)
{
	char a[] = "UPPERCASE";
	char b[] = "UpperCas3";

	printf("%d\n", ft_str_is_uppercase(a));
	printf("%d\n", ft_str_is_uppercase(b));
	return (0);
}
