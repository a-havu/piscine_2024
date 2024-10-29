/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:31:16 by ahavu             #+#    #+#             */
/*   Updated: 2024/07/09 09:59:07 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 2)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
