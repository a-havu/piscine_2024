/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:29:05 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/03 18:41:02 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str);

int main (void)
{
	char a[] = "I DoN't HaVe UpPeR CaSeS";
	printf("%s\n", ft_strlowcase(a));
}
