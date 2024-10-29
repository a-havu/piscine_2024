/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:46:12 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/16 09:56:32 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int main ()
{
	char s[] = "lalalii lalalaa";
	char *arr;
	arr = ft_strdup(s);
	printf("strdup in action: %s \n", strdup(s));
	printf("my function in action: %s\n", arr);
	free (arr);
	arr = NULL;
	return (0);
}
