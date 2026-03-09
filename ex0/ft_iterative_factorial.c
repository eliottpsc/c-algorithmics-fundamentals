/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:54:34 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/09 19:39:10 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
/*
#include <stdio.h>
int	main(void)
{
	int	abc;
	abc = ft_iterative_factorial(8);
	printf("%d", abc);
	abc = ft_iterative_factorial(1);
	printf("%d", abc);
	abc = ft_iterative_factorial(3);
	printf("%d", abc);
	abc = ft_iterative_factorial(-1);
	printf("%d", abc);
	abc = ft_iterative_factorial(-3);
	printf("%d", abc);
	abc = ft_iterative_factorial(0);
	printf("%d", abc);
}

void	putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
*/
