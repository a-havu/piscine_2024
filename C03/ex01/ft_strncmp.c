/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:45:19 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/07 11:16:18 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
	{
		if ((s1[i] - s2[i]) != 0 && i < n)
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] && i < n)
	{
		return (-1);
	}
	return (0);
}
