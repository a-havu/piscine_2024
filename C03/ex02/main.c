/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:01:00 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/05 11:07:30 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcat(char *dest, char *src);


int main(void)
{
	char a[] = "My name is ";
	char b[] = "Aino";

	printf("%s\n", ft_strcat(a, b));
	return (0);
}
