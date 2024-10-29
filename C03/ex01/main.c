/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:54:58 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/04 18:14:36 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	int n;
	char a[] = "aak";
	char b[] = "aam";
	char c[] = "aggaaa";

	n = 3;

	printf("%d\n", strncmp(a, b, n));

	printf("%d\n", ft_strncmp(a, b, n));
	printf("%d\n", ft_strncmp(a, c, n));
	printf("%d\n", ft_strncmp(b, c, n));
}
