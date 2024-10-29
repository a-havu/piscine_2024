/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:22:22 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/03 14:34:10 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
        int n = 100;

	char x[100] = "Destination";
	char y[100] = "Source";
        char o[100] = "Destination";
        char p[100] = "Source";

	strncpy(o, p, n);
        ft_strncpy(x, y, n);

        printf("This is what the strncpy function does:\n");
        printf("%s\n", o);
        printf("%s\n", p);
        printf("This is what my function does:\n");
        printf("%s\n", x);
        printf("%s\n", y);
        return (0);
}

