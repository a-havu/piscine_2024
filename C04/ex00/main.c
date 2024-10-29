/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:27:56 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/08 10:40:22 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main (void)
{
	char a[] = "Hello hello";
	char b[] = "Laila the cat";
	printf("Here's what strlen function does:\n%ld\n", strlen(a));
	printf("%ld\n", strlen(b));
	printf("Here's what my function does:\n%d\n", ft_strlen(a));
	printf("%d\n", ft_strlen(b));
	return (0);
}
