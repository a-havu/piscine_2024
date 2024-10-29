/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:37:06 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/04 11:39:52 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int main (void)
{
	char a[] = "I don't have any lowercases!";
	printf("%s\n", ft_strupcase(a));
}
