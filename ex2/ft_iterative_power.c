/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 19:11:10 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/09 19:42:52 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tot;

	tot = nb;
	if (power < 0)
		return (0);
	if ((power == 0) && (nb == 0))
		return (1);
	while (power-- > 1)
		tot *= nb;
	return (tot);
}
/*
#include <stdio.h>
int	main(void)
{
printf("%d\n", ft_iterative_power(10, 3));
printf("%d\n", ft_iterative_power(0, 0));
printf("%d\n", ft_iterative_power(10, -3));
printf("%d\n", ft_iterative_power(-10, 3));
printf("%d\n", ft_iterative_power(1, 3));
}
*/
