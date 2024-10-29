/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:16:22 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/05 11:59:41 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char *ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{
	char a[] = "My name is ";
	char b[] = "Aino";

	unsigned int nb = 2;
	printf("%s\n", ft_strncat(a, b, nb));
}
