/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:10:35 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/03 14:19:17 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main (void)
{
        char o[] = "Destination";
        char p[] = "Source";
	char x[] = "Destination";
	char y[] = "Source";

        strcpy (o, p);
	ft_strcpy (x, y);

        printf("This is what the strcpy function does:\n");
        printf("%s\n", o);
        printf("%s\n", p);
        printf("This is what my function does:\n");
        printf("%s\n", x);
        printf("%s\n", y);
        return 0;
}

