/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:40:54 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/04 13:44:27 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main (void)
{
	char a[] = "a";
	char b[] = "aaa";
	char c[] = "a";
	
	printf("%d\n", strcmp(a, b));

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(a, c));
	printf("%d\n", ft_strcmp(b, c));
}
