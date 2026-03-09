/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:37:15 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/09 19:41:42 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb < 2)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	printf("%d", ft_recursive_factorial(3));
	printf("%d", ft_recursive_factorial(0));
	printf("%d", ft_recursive_factorial(-13));
	printf("%d", ft_recursive_factorial(-54));
}
*/
