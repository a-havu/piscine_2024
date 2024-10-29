/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:56:34 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/17 15:56:37 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main ()
{
	int size;
	char **strs;
	char *sep;
	
	strs = {};
	
	size = 3;
	sep = "-+-";
	strs[0] = "I";
	strs[1] = "need";
	strs[2] = "sleep";
	printf("%s", ft_strjoin(size, strs, sep));
	
}
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *ft_strjoin(int size, char **strs, char *sep);
int	main(void)
{
	char *strs[26] = {"abc", "defg", "hijk", "lmnop"};
	char *arr;	
	arr = ft_strjoin(4, strs, "-+-");
	printf("Before free = %s\n", arr);
	free(arr);
	printf("After free = %s\n", arr);
	return (0);
}
