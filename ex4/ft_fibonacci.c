/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 19:56:17 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/09 20:02:56 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index == -1)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int	main(void)
{
printf("%d\n", ft_fibonacci(7));
printf("%d\n", ft_fibonacci(0));
printf("%d\n", ft_fibonacci(-1));
}
*/
