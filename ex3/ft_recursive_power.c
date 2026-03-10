/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 19:44:28 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/10 14:13:40 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0) && (nb > 0))
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if ((power == 0) && (nb == 0))
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("10^0 - %d\n", ft_recursive_power(10, 0));
	printf("0^3 - %d\n", ft_recursive_power(0, 3));
	printf("10^3 - %d\n", ft_recursive_power(10, 3));
	printf("10^-3 - %d\n", ft_recursive_power(10, -3)); // 0
	printf("0^0 - %d\n", ft_recursive_power(0, 0));  // 1
	printf("-10^3 - %d\n", ft_recursive_power(-10, 3));
	printf("-10^-3 - %d\n", ft_recursive_power(-10, -3));
}
*/
